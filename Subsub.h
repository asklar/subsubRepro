#pragma once
#include "GroupView.h"
#include "SubSub.g.h"

namespace winrt::Repro2::implementation
{
  struct SubSub : SubSubT<SubSub, winrt::Repro2::implementation::GroupView>
  {
    SubSub() = default;
    int RenderBloop() {
      return RenderGroup() * 2;
    }
  };

}

namespace winrt::Repro2::factory_implementation
{
  struct SubSub : SubSubT<SubSub, implementation::SubSub>
  {
  };

}