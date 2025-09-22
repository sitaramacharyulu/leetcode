int maxFrequencyElements(int* nums, int numsSize) {
    int freq[120]={0},i,element=0,max=0,j=0;
    for(i=0;i<numsSize;i++)
       freq[nums[i]]++;
    for(i=0;i<120;i++){
        if(freq[i]>max){
          max=freq[i];
        }
    }
    for(i=0;i<120;i++)
        if(freq[i]==max)
          element+=max;
    return element;
}