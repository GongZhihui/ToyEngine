#include "actor.h"
#include <string>

TE_BEGIN_NAMESPACE

struct Actor::Private
{
	int m = 0;
};

Actor::Actor(int n)
	: TE_DEFINE_PRIVATE()
{
	p_->m = n + 1;
}

Actor::~Actor()
{
}

int Actor::show() const
{
	return p_->m;
}

TE_END_NAMESPACE

