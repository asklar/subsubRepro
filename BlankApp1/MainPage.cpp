#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include <winrt/Repro2.h>

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::BlankApp1::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
        winrt::Repro2::GroupView g;
        auto x = g.RenderGroup();

        winrt::Repro2::SubSub s;
        auto y = s.RenderGroup();

        y = s.RenderBloop();

    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
