object Form1: TForm1
  Left = 126
  Top = 104
  BorderStyle = bsSingle
  Caption = 'NEO Application - DataBase Viewer'
  ClientHeight = 509
  ClientWidth = 881
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
  object DBNavigator1: TDBNavigator
    Left = 0
    Top = 48
    Width = 400
    Height = 25
    Hint = 
      'Prima, Prior, Next, Last, Adauga, Sterge, Edit, Post, Cancel, Re' +
      'fresh'
    DataSource = DataSource1
    TabOrder = 0
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 72
    Width = 873
    Height = 385
    Color = clBackground
    DataSource = DataSource1
    FixedColor = clRed
    Font.Charset = ANSI_CHARSET
    Font.Color = clLime
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete]
    ParentFont = False
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clBlack
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object Button1: TButton
    Left = 104
    Top = 472
    Width = 75
    Height = 25
    Caption = 'View'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 16
    Top = 472
    Width = 75
    Height = 25
    Caption = 'Open'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 312
    Top = 472
    Width = 75
    Height = 25
    Caption = 'Append'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 400
    Top = 472
    Width = 75
    Height = 25
    Caption = 'Delete'
    TabOrder = 5
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 488
    Top = 472
    Width = 75
    Height = 25
    Caption = 'Save'
    TabOrder = 6
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 192
    Top = 472
    Width = 75
    Height = 25
    Caption = 'Close DB'
    TabOrder = 7
    OnClick = Button6Click
  end
  object CheckBox1: TCheckBox
    Left = 424
    Top = 48
    Width = 49
    Height = 17
    Caption = 'Filtru'
    TabOrder = 8
    OnClick = CheckBox1Click
  end
  object Edit1: TEdit
    Left = 640
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 9
    OnChange = Edit1Change
  end
  object ComboBox1: TComboBox
    Left = 488
    Top = 40
    Width = 145
    Height = 21
    ItemHeight = 13
    TabOrder = 10
  end
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 8
    Top = 8
  end
  object Table1: TTable
    AutoCalcFields = False
    AutoRefresh = True
    DatabaseName = 'BCDEMOS'
    Left = 8
    Top = 40
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Paradox|*.db|FoxPro|*.dbf'
    Title = 'Select database'
    Left = 648
  end
end
