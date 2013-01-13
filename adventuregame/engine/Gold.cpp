////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer 
/// anssi.grohn@pkamk.fi
////////////////////
#include "Gold.h"
////////////////////////////////////////////////////////////////////////////////
// ---- Nina Ranta ----
Gold::Gold() : m_nAmount(0)
{
  
}
////////////////////////////////////////////////////////////////////////////////
Gold::Gold( unsigned int value) : m_nAmount(value)
{
  
}
////////////////////////////////////////////////////////////////////////////////

Gold::~Gold()
{
  
}
////////////////////////////////////////////////////////////////////////////////
unsigned int 
Gold::GetAmount() const
{
  return m_nAmount;
}
////////////////////////////////////////////////////////////////////////////////

void 
Gold::SetAmount( unsigned int value )
{
  m_nAmount = value;
}
////////////////////////////////////////////////////////////////////////////////
// ---- Nina Ranta ----
unsigned int 
Gold::GetCountAmount() const
{
  return c_nAmount;
}

////////////////////////////////////////////////////////////////////////////////
// ---- Nina Ranta ----
void 
Gold::SetCountAmount( unsigned int count )
{
  c_nAmount += count;
}

////////////////////////////////////////////////////////////////////////////////
// ---- Nina Ranta ----
void 
Gold::ZeroCountAmount( unsigned int count )
{
  c_nAmount = count;
}

////////////////////////////////////////////////////////////////////////////////
