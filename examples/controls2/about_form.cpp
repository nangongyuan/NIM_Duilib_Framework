#include "stdafx.h"
#include "about_form.h"
#include <shellapi.h>

const LPCTSTR AboutForm::kClassName = L"About";

AboutForm::AboutForm()
{
}


AboutForm::~AboutForm()
{
}

std::wstring AboutForm::GetSkinFolder()
{
	return L"";
}

std::wstring AboutForm::GetSkinFile()
{
	return L"";
}

std::wstring AboutForm::GetWindowClassName() const
{
	return kClassName;
}

std::wstring AboutForm::GetXmlLayout()
{
  std::wstring xml = LR"(
<?xml version="1.0" encoding="UTF-8"?>
<Window size="370,190" caption="0,0,0,35">
  <VBox bkcolor="bk_wnd_darkcolor" width="370" height="190">
    <HBox width="stretch" height="35" bkcolor="bk_wnd_lightcolor">
      <Control width="auto" height="auto" valign="center" margin="8"/>
      <Label text="Controls" valign="center" margin="8"/>
      <Control />
      <Button class="btn_wnd_close" name="closebtn" margin="4,6,8,0"/>
    </HBox>
    <Box>
      <VBox margin="0,0,0,0" valign="center" halign="center" width="auto" height="auto">
        <Label name="tooltip" text="NetEase IM Duilib controls example."/>
        <Label name="link" width="stretch" text="https://yunxin.163.com/" normaltextcolor="blue" align="center" cursortype="hand" margin="0,8"/>
      </VBox>
    </Box>
  </VBox>
</Window>

        )";
  return xml;
}

void AboutForm::InitWindow()
{
	ui::Label* link = static_cast<ui::Label*>(FindControl(L"link"));
	if (link)
	{
		link->AttachButtonUp([link](ui::EventArgs* args) {
			ShellExecute(NULL, L"open", link->GetText().c_str(), NULL, NULL, SW_SHOWDEFAULT);
			return true;
		});
	}
}

