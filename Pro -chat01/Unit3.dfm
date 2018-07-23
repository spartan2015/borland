object Form3: TForm3
  Left = 425
  Top = 201
  BorderStyle = bsDialog
  Caption = 'Setari pentru Server'
  ClientHeight = 202
  ClientWidth = 328
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  Position = poScreenCenter
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 16
    Width = 69
    Height = 20
    Caption = 'Server IP:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 40
    Width = 96
    Height = 20
    Caption = 'Server Name:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 64
    Width = 83
    Height = 20
    Caption = 'Server Port:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 88
    Width = 35
    Height = 18
    Caption = 'Nick:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 8
    Top = 112
    Width = 35
    Height = 18
    Caption = 'Font:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 8
    Top = 136
    Width = 126
    Height = 18
    Caption = 'Background Color'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object SpeedButton1: TSpeedButton
    Left = 144
    Top = 136
    Width = 97
    Height = 22
    Caption = 'Color'
    OnClick = SpeedButton1Click
  end
  object SpeedButton2: TSpeedButton
    Left = 144
    Top = 112
    Width = 97
    Height = 22
    Caption = 'Font type and color'
    OnClick = SpeedButton2Click
  end
  object MaskEdit1: TMaskEdit
    Left = 120
    Top = 16
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object MaskEdit2: TMaskEdit
    Left = 120
    Top = 64
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Edit1: TEdit
    Left = 120
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object Button1: TButton
    Left = 120
    Top = 168
    Width = 75
    Height = 25
    Caption = 'Save'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 232
    Top = 168
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'Cancel'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Edit2: TEdit
    Left = 120
    Top = 88
    Width = 121
    Height = 21
    TabOrder = 5
  end
  object Button3: TButton
    Left = 24
    Top = 168
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 6
    OnClick = Button3Click
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Options = [fdEffects, fdShowHelp]
    Left = 296
    Top = 8
  end
  object ColorDialog1: TColorDialog
    Ctl3D = True
    Options = [cdFullOpen, cdShowHelp, cdAnyColor]
    Left = 296
    Top = 40
  end
end
