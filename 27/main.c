struct node* Find(struct node* head, int key)
{
	struct node* temp1 = 0;//需要检查的节点
	struct node* temp1_done = 0;//检查过的节点
	temp1 = head->next;//移动到头结点的下一个
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
