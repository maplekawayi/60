struct node* Find(struct node* head, int key)
{
	struct node* temp1 = 0;//��Ҫ���Ľڵ�
	struct node* temp1_done = 0;//�����Ľڵ�
	temp1 = head->next;//�ƶ���ͷ������һ��
	temp1_done = head;
	while (temp1 != NULL)
	{
		if (temp1->data == key)
		{
			temp1_done->next = temp1->next;
			free(temp1);
			temp1 = temp1_done->next;
		}
		else
		{
			temp1_done = temp2;
			temp1 = temp1->next;
		}
	}
	return head;
}
