// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/intersection-point-in-y-shapped-linked-lists

int intersectPoint(Node* head1, Node* head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    int cnt1 = 0, cnt2 = 0;
    while(temp1){
        temp1 = temp1 -> next;
        cnt1++;
    }
    while(temp2){
        temp2 = temp2 -> next;
        cnt2++;
    }
    temp1 = head1;
    temp2 = head2;
    while(cnt1 > cnt2){
        temp1 = temp1 -> next;
        cnt1--;
    }
    while(cnt2 > cnt1){
        temp2 = temp2 -> next;
        cnt2--;
    }
   while(temp1!=temp2){
       temp1 = temp1 -> next;
       temp2 =temp2 -> next;
   }
   if(!temp1) return -1;
   
    return temp1->data;
}