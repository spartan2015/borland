object fisasah: Tfisasah
  Left = 283
  Top = 239
  BorderIcons = [biMinimize]
  BorderStyle = bsSingle
  Caption = 'Fisa sah'
  ClientHeight = 262
  ClientWidth = 523
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 16
  object SpeedButton3: TSpeedButton
    Left = 0
    Top = 232
    Width = 225
    Height = 22
    Caption = 'Creaza fisa sah'
    OnClick = fisasahExecute
  end
  object SpeedButton4: TSpeedButton
    Left = 416
    Top = 232
    Width = 105
    Height = 22
    Caption = 'Exit'
    OnClick = exitExecute
  end
  object Bevel1: TBevel
    Left = 0
    Top = 0
    Width = 521
    Height = 225
    Style = bsRaised
  end
  object DBText1: TDBText
    Left = 3
    Top = 3
    Width = 201
    Height = 16
    AutoSize = True
    DataField = 'Nume_firma'
    DataSource = dm1.DataSource7
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object SpeedButton1: TSpeedButton
    Left = 232
    Top = 48
    Width = 73
    Height = 22
    Caption = 'Adauga'
    OnClick = adaugaExecute
  end
  object SpeedButton2: TSpeedButton
    Left = 232
    Top = 72
    Width = 73
    Height = 22
    Caption = 'Sterge'
    OnClick = stergeExecute
  end
  object Label1: TLabel
    Left = 2
    Top = 24
    Width = 28
    Height = 16
    Caption = 'Filtru'
  end
  object SpeedButton5: TSpeedButton
    Left = 232
    Top = 168
    Width = 73
    Height = 22
    Caption = 'Adauga tot'
    OnClick = adaugatotExecute
  end
  object SpeedButton6: TSpeedButton
    Left = 232
    Top = 192
    Width = 73
    Height = 22
    Caption = 'Sterge tot'
    OnClick = stergetotExecute
  end
  object Label2: TLabel
    Left = 320
    Top = 24
    Width = 27
    Height = 16
    Caption = 'Cont'
  end
  object DBCtrlGrid1: TDBCtrlGrid
    Left = 2
    Top = 48
    Width = 219
    Height = 168
    ColCount = 1
    DataSource = dm1.DataSource1
    PanelHeight = 28
    PanelWidth = 203
    TabOrder = 0
    RowCount = 6
    object DBEdit1: TDBEdit
      Left = 1
      Top = 1
      Width = 80
      Height = 24
      DataField = 'an'
      DataSource = dm1.DataSource1
      ReadOnly = True
      TabOrder = 0
    end
    object DBEdit2: TDBEdit
      Left = 81
      Top = 1
      Width = 121
      Height = 24
      DataField = 'luna'
      DataSource = dm1.DataSource1
      ReadOnly = True
      TabOrder = 1
    end
  end
  object Edit1: TEdit
    Left = 34
    Top = 20
    Width = 81
    Height = 24
    TabOrder = 1
    OnChange = Edit1Change
  end
  object lista: TListBox
    Left = 320
    Top = 48
    Width = 193
    Height = 169
    ItemHeight = 16
    MultiSelect = True
    TabOrder = 2
  end
  object Edit2: TEdit
    Left = 354
    Top = 18
    Width = 87
    Height = 24
    TabOrder = 3
  end
  object ActionList1: TActionList
    Left = 248
    object adauga: TAction
      Caption = 'adauga'
      OnExecute = adaugaExecute
    end
    object sterge: TAction
      Caption = 'sterge'
      OnExecute = stergeExecute
    end
    object exit: TAction
      Caption = 'exit'
      OnExecute = exitExecute
    end
    object fisasah: TAction
      Caption = 'fisasah'
      OnExecute = fisasahExecute
    end
    object adaugatot: TAction
      Caption = 'adaugatot'
      OnExecute = adaugatotExecute
    end
    object stergetot: TAction
      Caption = 'stergetot'
      OnExecute = stergetotExecute
    end
  end
end
