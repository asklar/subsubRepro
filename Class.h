#pragma once
#include "RenderableView.g.h"


namespace winrt::Repro2::implementation
{
  struct RenderableView : RenderableViewT<RenderableView>
  {
    RenderableView() = default;
    virtual int Render();
  };

}

namespace winrt::Repro2::factory_implementation
{
  struct RenderableView : RenderableViewT<RenderableView, implementation::RenderableView>
  {
  };

}
