package ProblemSolving;

import java.util.Scanner;

public class ProblemC {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int t,n,q;
		Scanner sc = new Scanner(System.in);
		t =  sc.nextInt();
		for(int i=1; i<=t; i++) {
			n =  sc.nextInt();
			int[] playersPen = new int[n+1];
			int[] scores = new int[n+1];
			int[] penHoldersIndex = new int[n+1];
			
			for(int j=1; j<=n; j++) {
				playersPen[j]=1;
				scores[j]= sc.nextInt();
				penHoldersIndex[j] = j;
			}
			
			q =  sc.nextInt();
			
			for(int k=0; k<=q; k++) {
				
				int qType = sc.nextInt();
				int player1Index, player2Index;
				
				if(qType==1) {
					
					player1Index = sc.nextInt();
					player2Index = sc.nextInt();
					
					if((scores[player1Index]==scores[player2Index]) ||
							(playersPen[player1Index]==0) ||
							(playersPen[player2Index]==0) ) 
					{
						//Nothing Happen...
					}
					else if(scores[player1Index]>scores[player2Index]) {
						playersPen[player1Index]+=playersPen[player2Index];
						playersPen[player2Index] = 0;
						scores[player1Index] += scores[player2Index];
						scores[player2Index] = 0;
						penHoldersIndex[player2Index] = player1Index;
					}
					else if(scores[player1Index]<scores[player2Index]) {
						playersPen[player2Index]+=playersPen[player1Index];
						playersPen[player1Index] = 0;
						scores[player2Index] += scores[player1Index];
						scores[player1Index] = 0;
						penHoldersIndex[player1Index] = player2Index;
					}
				}
				else if(qType==2) {
					int playerIndex = sc.nextInt();
					int penCountOfPlayer = playersPen[playerIndex];
					System.out.println(penCountOfPlayer+"\n");
				}
				else if(qType==3){
					int playerIndex = sc.nextInt();
					int penHolder = penHoldersIndex[playerIndex];
					System.out.println(penHolder+"\n");

				}
			}
		}
	}
}