#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <string.h>
#include <stdbool.h>

static const char * const initial_array[] = {
	 "ぁ", "あ", "い", "ぇ", "え", "ぉ", "け", "げ", "こ", "さ",
	"ざ", "し", "じ", "す", "ず", "せ", "ぜ", "そ", "ぞ"
};
static const char * const medial_array[] = {
	"た", "だ", "ち", "ぢ", "っ", "つ", "づ", "て", "で", "と",
	"ど", "な", "に", "ぬ", "ね", "の", "は", "ば", "ぱ", "ひ",
	"び"
};
static const char * const final_array[] = {
	  "", "ぁ", "あ", "ぃ", "い", "ぅ", "う", "ぇ", "ぉ", "お",
	"か", "が", "き", "ぎ", "く", "ぐ", "け", "げ", "ご", "さ",
	"ざ", "し", "じ", "ず", "せ", "ぜ", "そ", "ぞ"
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