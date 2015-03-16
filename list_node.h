/**
 *  list_node.h
 *
 *  @author Raul Butuc.
 *  @version 1.0.0 16/03/2015
 */

#pragma once

#include "list.h"
#include "list_iterator.h"

namespace my_library {

  template <class _Tp>
  class list_node {

    friend class list<_Tp>;
    friend class list_iterator<_Tp>;

    private:
      _Tp m_Node;
      list_node<_Tp> *m_pNext;

      list_node(const _Tp&, list_node<_Tp>*);
      ~list_node();
  };

  template <class _Tp>
  list_node<_Tp>::list_node(const _Tp& node, list_node<_Tp>* next) : m_Node(node), m_pNext(next) {}

  template <class _Tp>
  list_node<_Tp>::~list_node() {
    delete m_pNext;
  }

}