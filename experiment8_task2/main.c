#include <stdio.h>

// 函数原型声明(函数的具体实现需要你在文件末尾完成)
void find_top_k_index(int *interest, int n, int k, int *top_k_index);

int main() {
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    int interest[100];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &interest[i]);
    }
    int top_k_index[100];  // 其长度固定为 100，但实际上只需将返回结果写入到其前 k 个元素即可
    find_top_k_index(interest, n, k, top_k_index);
    for (i = 0; i < k; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", top_k_index[i]);
    }
    printf("\n");
    return 0;
}

// 你需要实现的函数
void find_top_k_index(int *interest, int n, int k, int *top_k_index) {
    // 请将返回结果写入到 top_k_index 数组中
    // 其长度固定为 100，但实际上只需将返回结果写入到其前 k 个元素即可

    if(k == 0 || n == 0){
    	return;
	}else{
		int i, j;
		int temp;
		
		//标记数组 未被选中为最大值的数标记为0 选中过的标记为1 
		int selected[100] = {0};
			
		for(i = 0; i < k; i++){
			//初始化哨兵值 
			//max_index：记录最大值的下标 max：最大值
			int max_index = -1;
			int max = -1;
			
			for(j = 0; j < n; j++){
				if(interest[j] > max && selected[j] == 0){	
					max = interest[j];
					max_index = j;
				}
			}			
			
			top_k_index[i] = max_index;
			selected[max_index] = 1;
		}
		
		return;
	}

}
