#pragma once
#include "Class.h"
#include "GroupView.g.h"

namespace winrt::Repro2::implementation
{
  struct GroupView : GroupViewT<GroupView, winrt::Repro2::implementation::RenderableView>
  {
    GroupView() = default;
    int RenderGroup();
  };

}

namespace winrt::Repro2::factory_implementation
{
  struct GroupView : GroupViewT<GroupView, implementation::GroupView>
  {
  };

}