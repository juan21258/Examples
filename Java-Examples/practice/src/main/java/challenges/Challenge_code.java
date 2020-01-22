package challenges;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import com.google.common.primitives.Ints;

public class Challenge_code {
	//Variable that stores the selected option
	static Scanner reader;

	public static int FirstFactorial(String num) {
		int temp = Integer.parseInt(num);
		int fact = temp;
		while(temp >= 2){
			fact = fact * (temp - 1);
			temp--;
		}
		return fact;
	}

	public static String FirstReverse(String str) {
		String output = "";
		int sizestr = str.length();
		int temp = sizestr;
		for(int i = 0; i < sizestr; i++){
			output += str.charAt(temp -1);
			temp--;
		}
		return output;
	}

	public static String LetterChanges(String str) { 
		int nextLetter;
		String output = "";
		for(int i = 0; i < str.length();i++){
			char character = str.charAt(i);
			int ascii = (int) character;
			if((ascii >= 65 && ascii <= 90)||(ascii >= 97 && ascii <= 122)){
				if(ascii == 90){
					nextLetter = 65;
				}
				else if(ascii == 122){
					nextLetter = 97;
				}
				else{
					nextLetter = ascii + 1;   
				}
				char nextL = (char)nextLetter;
				if((nextL == 'a') || (nextL == 'e') || (nextL == 'i') || 
						(nextL == 'o') || (nextL == 'u')){
					nextLetter -= 32;
					nextL = (char)nextLetter;
				}
				output += nextL;
			}
			else{
				output += character;
			}
		}
		return output;
	}
	
	public static String LongestWord(String sen) {
		String[] words = sen.split(" ");
		int[] quantity = new int[words.length];
		int ascii;
		int pos = 0;
		String longWord = "";
		for (String word : words) {
			for(int i = 0;i<word.length();i++) {
				char character = word.charAt(i);
				ascii = (int) character;
				if((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) {
					quantity[pos] += 1;
				}
			}
			pos++;
		}
		int big = quantity[0];
		for (int i = 1; i < quantity.length;i++) {
			if(quantity[i] > big) {
				big = quantity[i];
			}
		}
		int posbig = Ints.indexOf(quantity, big);
		longWord = words[posbig];
		return longWord;
	}

	public static int SimpleAdding(String num) { 
	    int result = 1;
	    int temp = Integer.parseInt(num);
	    for (int i = 2;i<=temp;i++) {
	    	result += i;
	    }
	    return result;
	}
	
	public static String LetterCapitalize(String str) { 
		String[] words = str.split(" ");
		char firstCap;
		char cap;
		int capAscii;
		String output = "";
		int aux = 0;
		for(String word : words) {
			String temp = word;
			firstCap = word.charAt(0);
			capAscii = (int) firstCap;
			if(capAscii >= 97 && capAscii <= 122) {
				capAscii -=32;
			}
			cap = (char)capAscii;
			temp = word.substring(1, word.length());
			if(aux < words.length - 1) {
				output += cap + temp + " ";
			}
			else {
				output += cap + temp;
			}
			aux++;
		}
		return output;
	}
	
	public static String CorrectPath(String str) {
		int[] board = new int[25];
		int value = 1;
		//initializing values in array
		for(int i = 0; i < 25;i++) {
			board[i] = value;
			value++;
		}
		//Moving according to the string
		//Get each character and move
		//int moveqty = str.length();
		//char movement;
		/*int asciimove;
		for(int i = 0; i<moveqty; i++) {
			asciimove = (int)str.charAt(i);
		}*/
		//PENDING
		return str;
	}
	
	public static int[] Fix34(int[] nums) {
		for(int i = 0; i< nums.length;i++) {
			if(((nums[i] == 3) && (nums[i+1] != 4)) && (i != (nums.length - 1))) {
				boolean found = false;
				for(int j = 0;j<nums.length;j++) {
					if(j >= 1) {
						if(nums[j] == 4 && nums[j-1] != 3 && found == false) {
							int temp = nums[i+1];
							nums[i+1] = nums[j];
							nums[j] = temp;
							found = true;
						}
					}
					else {
						if(nums[j] == 4 && found == false) {
							int temp = nums[i+1];
							nums[i+1] = nums[j];
							nums[j] = temp;
							found = true;
						}
					}
				}
			}
		}
		return nums;
	}

	public static boolean gHappy(String str) {
		boolean happy = true;
		for(int i = 0; i< str.length();i++) {
			if(str.charAt(i) == 'g') {
				if(str.length()>1) {
					if(i == 0) {
						if(str.charAt(i+1) == 'g') {
							happy = true;
						}
						else {
							happy = false;
						}
					}
					else {
						if(i != str.length() - 1) {
							if(str.charAt(i) == 'g' && str.charAt(i+1) == 'g'){
								happy = true;
							}
							else {
								happy = false;
							}
						}
						else {
							if(str.charAt(i) == 'g' && str.charAt(i-1) == 'g') {
								happy = true;
							}
							else {
								happy = false;
							}
						}
					}
				}
				else {
					happy = false;
				}
				i+=2;
			}
		}
		return happy;
	}
	
	public static ArrayList<Integer> digits(int num){
		ArrayList<Integer> digitsArray = new ArrayList<Integer>();
		while(num > 0) {
			digitsArray.add(num%10);
			num = num/10;
		}
		return digitsArray;
	}
	
	public static int productNumbers(ArrayList<Integer> numbers) {
		int product = 1;
		for(int number : numbers) {
			product *= number;
		}
		return product;
	}
	
	public static int littleBugger(int num) {
		
		int res = productNumbers(digits(num)); //Obtain multiplication
		System.out.println(res);
		int bugger = 1;
		while(res > 9) {
			bugger++;
			res = productNumbers(digits(res));
		}
		return bugger;
	}
	
	public Map<String, Integer> word0(String[] strings) {
		  Map <String, Integer> mapword = new HashMap<String, Integer>();
		  for (String item : strings) {
		    mapword.put(item, 0);
		  }
		  return mapword;
	}
	
	public static boolean regexExecute() {
		  String line = "This order was placed for QT3000! OK?";
	      String pattern = "(.*)(\\d+)(.*)";
	
	      // Create a Pattern object
	      Pattern r = Pattern.compile(pattern);
	
	      // Now create matcher object.
	      Matcher m = r.matcher(line);
	      if (m.find( )) {
	         System.out.println("Found value: " + m.group(0) );
	         System.out.println("Found value: " + m.group(1) );
	         System.out.println("Found value: " + m.group(2) );
	      }else {
	         System.out.println("NO MATCH");
	      }
	      return true;
	}
	
	public static String perfectNumber(int number) {
		ArrayList<Integer> perfectDigits = new ArrayList<Integer>();
		perfectDigits.add(1);
		int perfectsum = 0;
		for(int i = 2; i <= (number/2);i++ ) {
			if(number%i == 0) {
				perfectDigits.add(i);
			}
		}
		
		for(int value : perfectDigits) {
			perfectsum += value;
		}
		
		if(perfectsum == number) {
			return "The number: " + number + " is perfect";
		}
		else {
			return "The number: " + number + " is not perfect";
		}
	}
		
	
	public static void main(String[] args) {
		System.out.println("What challenge do you want to execute");
		reader = new Scanner(System.in);
		int option = reader.nextInt();
		switch (option) {
		case 1:
			// Factorial challenge
			System.out.println("Type a number to find out the factorial");
			Scanner s1 = new Scanner(System.in);
			System.out.print(FirstFactorial(s1.nextLine()));
			break;
		case 2:
			System.out.println("Type a word to reverse");
			// Reverse challenge
			Scanner s2 = new Scanner(System.in);
			System.out.print(FirstReverse(s2.nextLine()));
			break;
		case 3:
			// Next letter challenge
			System.out.println("Type something to find each next character");
			Scanner s3 = new Scanner(System.in);
			System.out.print(LetterChanges(s3.nextLine()));
			break;
		case 4:
			// Longest word challenge
			System.out.println("Type a group of words");
			Scanner s4 = new Scanner(System.in);
		    System.out.print(LongestWord(s4.nextLine()));
		    break;
		case 5:
			// Simple adding challenge
			System.out.println("Type a number for the sum");
			Scanner s5 = new Scanner(System.in);
			System.out.print(SimpleAdding(s5.nextLine()));
			break;
		case 6:
			// Letter capitalize challenge
			System.out.println("Type words to capitalize");
			Scanner s6 = new Scanner(System.in);
			System.out.print(LetterCapitalize(s6.nextLine()));
			break;
		case 7:
			// Correct path challenge
			System.out.println("Type a path to the grid goal");
			Scanner s7 = new Scanner(System.in);
			System.out.print(CorrectPath(s7.nextLine()));
			break;
		case 8:
			// Fix 34 challenge
			System.out.println("Type an array of numbers");
			Scanner s8 = new Scanner(System.in);
			String previous = s8.nextLine();
			String[] temp = previous.split(" ");
			int[] nums = new int[temp.length];
			int aux = 0;
			for(String num : temp) {
				nums[aux] = Integer.valueOf(num);
				aux++;
			}
			System.out.print(Fix34(nums));
			break;
		case 9:
			// Happy g challenge
			System.out.println("Type a string");
			Scanner s9 = new Scanner(System.in);
			System.out.print(gHappy(s9.nextLine()));
			break;
		case 10:
			//Little bugger challenge
			System.out.println("Enter a number with 2 or more digits:");
			Scanner s10 = new Scanner(System.in);
			System.out.println("The number required: " + littleBugger(s10.nextInt())
			+ " multiplications");
			break;
		case 11:
			System.out.println(regexExecute());
			break;
		case 12:
			//Perfect number challenge
			System.out.println("Enter a number:");
			Scanner s12 = new Scanner(System.in);
			System.out.println(perfectNumber(s12.nextInt()));
			break;
		default:
			System.out.println("None of the options above were selected");
		}
	}
}