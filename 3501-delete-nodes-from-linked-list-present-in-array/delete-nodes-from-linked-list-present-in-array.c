/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    int freq[100001] ={0};
    for(int i=0;i<numsSize;i++){
          freq[nums[i]]++;
    }
        struct ListNode* curr = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr->next=head;
        curr->val=0;
        struct ListNode* temp = head;
    struct ListNode* pre = curr;
            while(temp){
                if(freq[temp->val]==1){
                   pre->next = temp->next;
                }
                else{
                pre=temp;
                }
                temp=temp->next;
            }
        return curr->next;
}