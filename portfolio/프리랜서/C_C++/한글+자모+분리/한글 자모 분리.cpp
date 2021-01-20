#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <string.h>
#include <stdbool.h>

static const char * const initial_array[] = {
	 "��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
	"��", "��", "��", "��", "��", "��", "��", "��", "��"
};
static const char * const medial_array[] = {
	"��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
	"��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
	"��"
};
static const char * const final_array[] = {
	  "", "��", "��", "��", "��", "��", "��", "��", "��", "��",
	"��", "��", "��", "��", "��", "��", "��", "��", "��", "��",
	"��", "��", "��", "��", "��", "��", "��", "��"
};

#define count_elements_of(array) (sizeof(array)/sizeof(array[0]))

int static DecomposeKoreanSyllable(wchar_t code, wchar_t *initial, wchar_t *medial, wchar_t *final) {
	const wchar_t num_initial = count_elements_of(initial_array);
	const wchar_t num_medial = count_elements_of(medial_array);
	const wchar_t num_final = count_elements_of(final_array);
	const wchar_t begin = 0xAC00;
	const wchar_t end = begin + num_initial * num_medial * num_final;

	if (begin <= code && code < end) {
		code -= begin;
		if (final)*final = code % num_final;
		code /= num_final;
		if (medial)*medial = code % num_medial;
		code /= num_medial;
		if (initial)*initial = code;
		return true;
	}
	else return false;
}

int main(void) {
	char buf[80];
	setlocale(LC_ALL, "");
	mbtowc(0, 0, 0); // reset

	while (fgets(buf, sizeof(buf), stdin)) {
		size_t buf_offset = 0, buf_len = strlen(buf);
		wchar_t wc;
		int wc_len;
		while ((wc_len = mbtowc(&wc, buf + buf_offset, buf_len - buf_offset)) > 0) {
			wchar_t initial, medial, final;
			if (DecomposeKoreanSyllable(wc, &initial, &medial, &final)) {
				fputs(initial_array[initial], stdout);
				fputs(medial_array[medial], stdout);
				fputs(final_array[final], stdout);
			}
			buf_offset += wc_len;
		}
	}
	putchar('\n');
	return 0;
}