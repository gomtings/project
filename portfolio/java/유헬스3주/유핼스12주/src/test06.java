class Dim {
	//�޼ҵ� �����ε� : �Ű����� ������ Ÿ��, �޼ҵ� ��ȯŸ���� �ٸ��� ����
	//��, �޼ҵ� �̸��� �����ϴ�
	int sum(int[] arr){
		int hap=0;
		for(int i=0; i<arr.length;i++)
			hap += arr[i];
		return hap;
	}
	
	double sum(double[] arr){
		double hap=0;
		for(double d : arr)
			hap += d;
		return hap;
	}
}
public class test06 {
	public static void main(String[] args) {
		Dim obj=new Dim(); //��ü ����
		//������ ���� �迭�� �Ű������� ����
		int ihap=obj.sum(new int[] {4,2,6,5,8,9}); 
//�Ǽ��� ���� �迭�� �Ű������� ����
		double dhap = obj.sum(new double[] {12.3, 4.2, 5.7, 2.4, 4.1});
		System.out.println("���� �迭 �� " + ihap);
		System.out.println("�Ǽ� �迭 �� " + dhap);
	}
}
