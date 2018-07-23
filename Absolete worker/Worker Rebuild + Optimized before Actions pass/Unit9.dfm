object Dir_dialog: TDir_dialog
  Left = 223
  Top = 136
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Dir_dialog'
  ClientHeight = 239
  ClientWidth = 414
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 193
    Width = 230
    Height = 13
    Caption = 'D:\Borland Projects\Worker Rebuild + Optimized'
  end
  object Bevel1: TBevel
    Left = 4
    Top = 0
    Width = 405
    Height = 209
    Style = bsRaised
  end
  object DirectoryListBox1: TDirectoryListBox
    Left = 8
    Top = 48
    Width = 393
    Height = 145
    DirLabel = Label1
    ItemHeight = 20
    TabOrder = 0
  end
  object DriveComboBox1: TDriveComboBox
    Left = 8
    Top = 16
    Width = 145
    Height = 19
    DirList = DirectoryListBox1
    TabOrder = 1
  end
  object Button1: TButton
    Left = 173
    Top = 213
    Width = 75
    Height = 25
    Caption = 'OK'
    ModalResult = 1
    TabOrder = 2
    OnClick = Button1Click
  end
end
