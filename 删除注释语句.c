#include <stdio.h>
//	int two(void)
	int main()
	{
	int c=getchar();
	const int Uncode1=47 ;  //47是/ 
	const int Uncode2 =42;  //42是* 
while(c!=EOF||c!=10){
	if (c==Uncode1){
		c=getchar();
		if(c==Uncode2) {//进入/*注释了
			c=getchar();
			while(c!=Uncode2) {
				again:
				c=getchar();
			}
			if (c==Uncode2){
				c=getchar();
				if (c==Uncode1){//此时出去的c=/ 
//					c=999;      //使得c不触发if 
					goto out;
				}
				else {
					goto again;
				}
			}
                         //突然发觉我想错了,"//"结尾是不行的，而*/可以�
		}
		else if (c==Uncode1){   //进入//注释了
			c=getchar();
			while (c!=10){
				c=getchar();
			}
			goto out;   //此时出去的c=\n 
		
		}
		else {//如果没有进入注释
			printf("/");
			putchar(c);
		}
	}
	putchar(c);
	out:
	c=getchar();

}
	return 0;
	}
//	
//	int two(void)
//	{
//	int i=0;
//	if (c==Uncode1){
//		c=getchar();
//		if(c==Uncode1||c==Uncode2) {
//			return 1;
//		}
//		else {
//			return 0;
//		}
//	
//	}
