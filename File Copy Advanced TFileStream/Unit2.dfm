object Form2: TForm2
  Left = 427
  Top = 182
  Width = 387
  Height = 208
  Caption = 'Catre...'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 144
    Width = 252
    Height = 13
    Caption = 'D:\Borland Projects\File Copy Advanced TFileStream'
  end
  object DriveComboBox1: TDriveComboBox
    Left = 8
    Top = 8
    Width = 145
    Height = 19
    DirList = DirectoryListBox1
    TabOrder = 0
  end
  object DirectoryListBox1: TDirectoryListBox
    Left = 8
    Top = 32
    Width = 361
    Height = 105
    DirLabel = Label1
    ItemHeight = 16
    TabOrder = 1
  end
  object Button1: TButton
    Left = 152
    Top = 160
    Width = 75
    Height = 21
    Caption = 'OK'
    TabOrder = 2
    OnClick = Button1Click
  end
end
