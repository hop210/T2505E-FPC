#include <stdio.h>

int main(){
	int ngay;
	int thang;
	int year;
	
	printf("nhap ngay= ");
	scanf("%d",&ngay); 
	
	printf("nhap thang= ");
	scanf("%d",&thang); 
	
	printf("nhap nam= ");
	scanf("%d",&year); 
	
	int ngayKe;
	int thangKe;
	int namKe;
	
	if( thang==2 ){
		if(ngay < 29){
			if(ngay < 28){
				ngay = ngay +1;
				printf("ngay ke tiep la ngay %d thang %d nam %d",ngay,thang,year);
			}else{
				if( year%4 == 0 && ((year%100!=0)||(year%400==0)) ){
					ngay=29;
					printf("ngay ke tiep la ngay %d thang %d nam %d",ngay,thang,year);
				}else{
					ngay = 1;
					thang =3;
					printf("ngay ke tiep la ngay %d thang %d nam %d",ngay,thang,year);
				}
			}
		}else{
			ngay = 1;
			thang = 3;
			printf("ngay ke tiep la ngay %d thang %d nam %d",ngay,thang,year);
		}
	}else{
		if(thang ==4 || thang ==6|| thang==9||thang==11) {
			if(ngay==30){
				ngay =1;
				thang = thang + 1;
				printf("ngay ke tiep la ngay %d thang %d nam %d",ngay,thang,year);
			}else{
				ngay = ngay + 1;
				printf("ngay ke tiep la ngay %d thang %d nam %d",ngay,thang,year);
			}
		}else{
			if(thang == 12 ){
				if(ngay == 31){
					ngay =1;
					thang=1;
					year = year+1;
					printf("ngay ke tiep la ngay %d thang %d nam %d",ngay,thang,year);
				}else{
					ngay=ngay+1;
					printf("ngay ke tiep la ngay %d thang %d nam %d",ngay,thang,year);
				}
			}else{
				if(ngay==31){
					ngay=1;
					thang=thang+1;
					printf("ngay ke tiep la ngay %d thang %d nam %d",ngay,thang,year);
				}else{
					ngay=ngay+1;
					printf("ngay ke tiep la ngay %d thang %d nam %d",ngay,thang,year);
				}
			}
		}
	}
	
}
