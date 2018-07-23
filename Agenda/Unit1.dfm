object Form1: TForm1
  Left = 192
  Top = 107
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Agenda'
  ClientHeight = 407
  ClientWidth = 705
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PopupMenu = PopupMenu1
  Position = poDesktopCenter
  OnActivate = FormActivate
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 184
    Width = 13
    Height = 20
    Caption = 'Zi'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 128
    Top = 184
    Width = 30
    Height = 20
    Caption = 'Ora:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 208
    Top = 184
    Width = 30
    Height = 20
    Caption = 'Text'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 512
    Top = 208
    Width = 105
    Height = 24
    Caption = 'Data curenta'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 8
    Top = 272
    Width = 41
    Height = 24
    Caption = 'Ora: '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label7: TLabel
    Left = 56
    Top = 272
    Width = 51
    Height = 24
    Caption = 'Wait...'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 388
    Width = 705
    Height = 19
    Panels = <>
    SimplePanel = False
  end
  object MonthCalendar1: TMonthCalendar
    Left = 504
    Top = 232
    Width = 197
    Height = 154
    Date = 37905.8820079861
    TabOrder = 1
    WeekNumbers = True
  end
  object c1: TComboBox
    Left = 8
    Top = 200
    Width = 105
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ItemHeight = 20
    ParentFont = False
    TabOrder = 2
    Text = 'Luni'
    Items.Strings = (
      'Luni'
      'Marti'
      'Miercuri'
      'Joi'
      'Vineri')
  end
  object c2: TComboBox
    Left = 128
    Top = 200
    Width = 73
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ItemHeight = 20
    ParentFont = False
    TabOrder = 3
    Text = '8-10'
    Items.Strings = (
      '8-10'
      '10-12'
      '12-14'
      '14-16'
      '16-18'
      '18-20')
  end
  object e1: TEdit
    Left = 208
    Top = 200
    Width = 193
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnKeyPress = e1KeyPress
  end
  object Button1: TButton
    Left = 208
    Top = 232
    Width = 57
    Height = 25
    Caption = 'Add'
    TabOrder = 5
    OnClick = AddExecute
  end
  object Button2: TButton
    Left = 272
    Top = 232
    Width = 57
    Height = 25
    Caption = 'Delete'
    TabOrder = 6
    OnClick = DeleteExecute
  end
  object grid1: TStringGrid
    Left = 0
    Top = 0
    Width = 705
    Height = 178
    Align = alTop
    Color = clBlack
    ColCount = 6
    DefaultColWidth = 112
    FixedColor = clBlue
    RowCount = 7
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ParentFont = False
    TabOrder = 7
    ColWidths = (
      112
      112
      112
      112
      112
      112)
    RowHeights = (
      24
      24
      24
      24
      24
      24
      24)
  end
  object Button3: TButton
    Left = 628
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Save'
    TabOrder = 8
    OnClick = SaveExecute
  end
  object Button4: TButton
    Left = 544
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Load'
    TabOrder = 9
    OnClick = LoadExecute
  end
  object Button5: TButton
    Left = 336
    Top = 232
    Width = 65
    Height = 25
    Caption = 'Delete All'
    TabOrder = 10
    OnClick = DeleteallExecute
  end
  object RadioGroup1: TRadioGroup
    Left = 0
    Top = 320
    Width = 185
    Height = 65
    Caption = 'Alerta'
    Items.Strings = (
      'Imagine'
      'Sunet'
      'Imagine + Sunet')
    TabOrder = 11
  end
  object GroupBox1: TGroupBox
    Left = 192
    Top = 320
    Width = 305
    Height = 65
    Caption = 'Timp alerta'
    TabOrder = 12
    object Label4: TLabel
      Left = 16
      Top = 24
      Width = 66
      Height = 13
      Caption = 'Minute inainte'
    end
    object CSpinEdit1: TCSpinEdit
      Left = 96
      Top = 24
      Width = 65
      Height = 22
      TabStop = True
      Color = clBackground
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clLime
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Increment = 5
      ParentColor = False
      ParentFont = False
      TabOrder = 0
      Value = 35
    end
    object CheckBox1: TCheckBox
      Left = 168
      Top = 24
      Width = 97
      Height = 17
      Caption = 'Activ'
      TabOrder = 1
    end
  end
  object MainMenu1: TMainMenu
    Left = 656
    Top = 16
    object File1: TMenuItem
      Caption = 'File'
    end
    object Setup1: TMenuItem
      Caption = 'Setup'
      object Sunet1: TMenuItem
        Caption = 'Sunet'
      end
      object Imagine1: TMenuItem
        Caption = 'Imagine'
      end
      object Sunetimagine1: TMenuItem
        Caption = 'Sunet+imagine'
      end
    end
    object Help1: TMenuItem
      Caption = 'Help'
      object About1: TMenuItem
        Caption = 'About'
        OnClick = AboutExecute
      end
    end
  end
  object ActionList1: TActionList
    Left = 656
    Top = 48
    object Load: TAction
      Caption = 'Load'
      OnExecute = LoadExecute
    end
    object Save: TAction
      Caption = 'Save'
      OnExecute = SaveExecute
    end
    object Delete: TAction
      Caption = 'Delete'
      OnExecute = DeleteExecute
    end
    object Deleteall: TAction
      Caption = 'Deleteall'
      OnExecute = DeleteallExecute
    end
    object Add: TAction
      Caption = 'Add'
      OnExecute = AddExecute
    end
    object sunet: TAction
      Caption = 'sunet'
    end
    object imagine: TAction
      Caption = 'imagine'
    end
    object sunetimagine: TAction
      Caption = 'sunetimagine'
    end
    object About: TAction
      Caption = 'About'
      OnExecute = AboutExecute
    end
    object Min: TAction
      Caption = 'Min'
      OnExecute = MinExecute
    end
  end
  object TrayIcon1: TTrayIcon
    Visible = True
    Hide = True
    RestoreOn = imDoubleClick
    PopupMenuOn = imNone
    Left = 656
    Top = 80
  end
  object PopupMenu1: TPopupMenu
    Left = 672
    Top = 208
    object Load1: TMenuItem
      Caption = 'Load'
      OnClick = LoadExecute
    end
    object Save1: TMenuItem
      Caption = 'Save'
      OnClick = SaveExecute
    end
    object Delete1: TMenuItem
      Caption = 'Add'
      OnClick = AddExecute
    end
    object Delete2: TMenuItem
      Caption = 'Delete'
      OnClick = DeleteExecute
    end
    object DeleteAll1: TMenuItem
      Caption = 'Delete All'
      OnClick = DeleteallExecute
    end
    object aboutbox: TMenuItem
      Caption = 'About this'
      OnClick = AboutExecute
    end
    object minimize1: TMenuItem
      Caption = 'Minimize'
      OnClick = MinExecute
    end
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 440
    Top = 192
  end
end
