#pragma once

class CNode {
private:
	int data;
	CNode *nextNode;
public:
	CNode();
	void SetData(int iData);
	int GetData() const;
	void SetNextNode(CNode *_nextNode);
	CNode* GetNextNode() const;
};