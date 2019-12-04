package 상속;

public class Book_12 {
	private String title;
	private String pages;
	private String writer;
	
	Book_12(){this("책이름 미상","페이지 미상","저자 미상");}
	Book_12(String title){
		this(title,"페이지미상","저자 미상");
	}
	Book_12(String title,String writer){
		this(title,"페이지 미상",writer);
	}
	Book_12(String title ,String pages,String writer){
		this.title=title;
		this.pages=pages;
		this.writer=writer;
		System.out.println(this.title);
	}
	public String getTitle(){
		return title;
	}
	public void setTitle(String title){
		this.title=title;
	}
	public String getpages(){
		return pages;
	}
	public void setpages(String pages){
		this.pages=pages;
	}
	public String getwriter(){
		return writer;
	}
	public void setwriter(String writer){
		this.writer=writer;
	}
	public String toString(){
		String str;
		str="책 이름 : "+title+"\n"+"페이지 수 :"+pages +"\n" +"저자 :"+writer+"\n";
				return str;
	}
}

class Magazine extends Book_12{
	private String date;
	Magazine(String title ,String pages,String writer,String date ){
		super( title , pages, writer);
		this.date=date;
	}
	
	
	public String getdate(){
		return date;
	}
	public void setdate(String title ,String pages,String writer,String date){
		this.date=date;
	}
	public String toString(){
		String str2;
		str2 ="발매일 :"+date +"\n";
		return super.toString()+str2;
	}
}