#include <iostream>
#include <string>

struct Node {
  int element;
  Node *next;
  Node *prev;
};

class DataStructClassProcess
{
public:
  DataStructClassProcess();
  void pushNode();
  void popNode();
  int getElementData();
  void setElementData(int num);
  unsigned int getNumberOfNodes();
  void printNodeElements();
private:
  void createNode();
  Node *point_node;
  Node *point_node_2;
  Node *point_node_print;
  unsigned int count;
};

DataStructClassProcess::DataStructClassProcess()
{
  point_node = nullptr;
  point_node_2 = nullptr;
  count = 0;
}

void DataStructClassProcess::createNode()
{
  point_node = new Node();

  point_node->next = nullptr;
  point_node->prev = nullptr;
  point_node->element = 0;
}

void DataStructClassProcess::pushNode()
{
  createNode();

  if(count <= 0)
  {
    point_node->element = 1;
    point_node_2 = point_node;
  }
  else {
    point_node->element = count + 1;
    point_node->prev = point_node_2;
    point_node_2->next = point_node;
    point_node_2 = point_node;
  }

  count++;
}

void DataStructClassProcess::popNode()
{
  if(count >= 1)
  {
    point_node_2 = point_node->prev;
    point_node_2->next = nullptr;
    point_node = point_node_2;
    delete point_node;
    count--;
  }
}

void DataStructClassProcess::setElementData(int num)
{
  point_node->element = num;
}

int DataStructClassProcess::getElementData()
{
  return point_node->element;
}

unsigned int DataStructClassProcess::getNumberOfNodes()
{
  return count;
}

void DataStructClassProcess::printNodeElements()
{
  point_node_print = point_node;
  for(unsigned int i = count; i > 0; i--)
  {
    std::cout << "Element in position " << i << " is = " << point_node_print->element << std::endl;
    point_node_print = point_node_print->prev;
  }
}

int main()
{
  DataStructClassProcess struct_process_class;

  struct_process_class.pushNode();
  struct_process_class.pushNode();
  struct_process_class.pushNode();
  struct_process_class.pushNode();
  struct_process_class.pushNode();

  struct_process_class.popNode();
  struct_process_class.popNode();

  std::cout << "Number of Nodes = " << struct_process_class.getNumberOfNodes() << std::endl;
  struct_process_class.printNodeElements();

  return 0;

}
