# Sorting

经典排序算法c++再现

参考这个[githubRepo](https://github.com/hustcc/JS-Sorting-Algorithm)

还有《算法导论》~

## 堆排

HeapSort是指利用堆这种数据结构所设计的一种排序算法。堆积是一个近似完全二叉树的结构，并同时满足堆积的性质：即子节点的**键值或索引**总是小于(或者大于)它的父节点。

### 算法步骤

1、将待排序序列构建成一个堆H[0....n-1]，根据(升序降序需求)选择大顶堆或小顶堆；

2、把堆首(最大值)和堆尾互换;

3、把堆的尺寸缩小1，并调用shift_down(0)，目的是把新的数组顶端数据调整到相应位置;

4、重复步骤2，直到堆的尺寸为1。

### 查阅博客

[](https://keneyr.blog.csdn.net/article/details/112787857)

## 快排

QUICKSORT(A,p,r)
	if p<r
		then q<-PARTITION(A,p,r)
			QUICKSORT(A,p,q-1)
			QUICKSORT(A,q+1,r)

PARTITION(A,p,r)
	x<-A[r]
	i<-p-1
	for j<-p to r-1
		do if A[j]<=x
			then i<-i+1
				exchange A[i]<->A[j]
	exchange A[i+1]<->A[r]
	return i+1