package move;
public class test {
		public static void main(String[] args) {
		animal[] pets= {
				new animal(),
				new cat("nabee"),
				new cat(),
				new dog(),
				new dog("rock"),
		};
		for(animal a:pets) {
			System.out.print("\n" + a +"_"+a.reaction(a));
			a.sound();
		}
		System.out.print("\npet들 중 dog는"+dog.getcountdog()+"마리");
		}
	}
