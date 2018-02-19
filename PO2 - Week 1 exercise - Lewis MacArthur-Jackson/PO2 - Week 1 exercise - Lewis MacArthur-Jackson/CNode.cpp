#include "CNode.h"

CNode::CNode()
{
	data = 0;
	nextNode = nullptr;
};

void CNode::SetData(int iData)
{
	 data = iData;
};

int CNode::GetData() const
{
	return data;
};

void CNode::SetNextNode(CNode * _nextNode)
{
	nextNode = _nextNode;
};

CNode * CNode::GetNextNode() const
{
	return nextNode;
};

