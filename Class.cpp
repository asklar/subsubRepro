#include "pch.h"
#include "Class.h"
#include "GroupView.g.cpp"
#include "RenderableView.g.cpp"
#include "Subsub.g.cpp"

#include "SubSub.h"

namespace winrt::Repro2::implementation
{
    int RenderableView::Render()
    {
      return 21;
    }

    int GroupView::RenderGroup()
    {
      // calling Render calls RenderableView::Render (unless Render is marked virtual)
      // calling this->Render calls GroupView::Render
      return 2 * Render();
    }
}
