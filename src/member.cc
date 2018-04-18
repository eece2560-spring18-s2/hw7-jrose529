#include "member.h"

#include <queue>

#include "database.h"

namespace algdb {

void Member::DumpConnections() {
  std::cout << "(" << member_id << ")";
  for (auto &m : connecting_members) {
    auto conn = m.second;
    std::cout << "->" << conn.dst->member_id << 
      "(" << conn.group->group_id << ")";
  }
  std::cout << "\n";
}

void Member::PathToMemberBFS(uint64_t dst_member_id) {
  // Fill in your code here
//   this->color = COLOR_GRAY;
//   this->key = 0;
//   this->parent = NULL;
  
//   std::queue<Member*> q;
  
//   q.push(this);
  
//     while (!q.empty()){
//     auto u = q.front();
//     q.pop();
//     for (auto it = connecting_members.begin(); it!=connecting_members.end(); it++) {
//         it->second.dst->color = COLOR_GRAY;
//         it->second.dst->key = this->key + 1;
//         it->second.dst->parent = this;
//         q.push(it->second.dst);
//     }
//     u->color = COLOR_BLACK;
//   } 
}

void Member::PathToMemberIDDFS(uint64_t dst_member_id) {
  // Fill in your code here
}
  
void Member::PrintPath(Member* dst) {
  Member *curr = dst;
  while(curr && curr != this) {
    std::cout << curr->member_name << " <- ";
    curr = curr->parent;
  }
  std::cout << this->member_name << "\n";
}

}
