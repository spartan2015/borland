object moneda: Tmoneda
  Left = 195
  Top = 163
  Width = 664
  Height = 273
  Caption = 'moneda'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 20
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 37
    Height = 20
    Caption = 'Casa'
  end
  object SpeedButton1: TSpeedButton
    Left = 256
    Top = 8
    Width = 23
    Height = 22
    Glyph.Data = {
      F6000000424DF600000000000000760000002800000010000000100000000100
      0400000000008000000000000000000000001000000000000000000000000000
      8000008000000080800080000000800080008080000080808000C0C0C0000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00888844444888
      8888888844444488888888884F444448888888884848F848888888884F4F8F48
      888888884848F848888888884F4F8F48888884444848F84448888444444F8F44
      448888444448F844444888848F8F8F8F8488888848F8F8F848888888848F8F84
      888888888848F848888888888884848888888888888848888888}
    OnClick = SpeedButton1Click
  end
  object SpeedButton2: TSpeedButton
    Left = 256
    Top = 40
    Width = 23
    Height = 22
    Glyph.Data = {
      F6000000424DF600000000000000760000002800000010000000100000000100
      0400000000008000000000000000000000001000000000000000000000000000
      8000008000000080800080000000800080008080000080808000C0C0C0000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00888888448888
      8888888884444888888888884444F48888888884444F8F488888884444F8F8F4
      888884444F8F8F8F48888444F8F8F8F8F4888844444F8F44444888884848F848
      88888888484F8F48888888884848F84888888888484F8F48888888884848F848
      88888888484F8F48888888888448F84888888888884444488888}
    OnClick = SpeedButton2Click
  end
  object Bevel1: TBevel
    Left = -8
    Top = 184
    Width = 657
    Height = 57
    Style = bsRaised
  end
  object radio: TRadioGroup
    Left = 64
    Top = 8
    Width = 185
    Height = 65
    Caption = 'In:'
    ItemIndex = 0
    Items.Strings = (
      'lei'
      'alta valuta')
    TabOrder = 0
    OnClick = radioClick
  end
  object DBGrid1: TDBGrid
    Left = 280
    Top = 32
    Width = 281
    Height = 120
    Color = clBlack
    DataSource = dm.DataSource10
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'moneda'
        Title.Caption = 'Moneda'
        Visible = True
      end>
  end
  object Button1: TButton
    Left = 568
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Nou'
    TabOrder = 2
    OnClick = Button1Click
  end
  object DBNavigator1: TDBNavigator
    Left = 280
    Top = 152
    Width = 240
    Height = 25
    DataSource = dm.DataSource10
    TabOrder = 3
  end
  object Button3: TButton
    Left = 568
    Top = 40
    Width = 75
    Height = 25
    Caption = 'Sterge'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 144
    Top = 200
    Width = 75
    Height = 25
    Caption = 'Acces'
    TabOrder = 5
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 400
    Top = 200
    Width = 75
    Height = 25
    Caption = 'Inapoi'
    TabOrder = 6
    OnClick = Button5Click
  end
  object Edit1: TEdit
    Left = 280
    Top = 5
    Width = 281
    Height = 28
    TabOrder = 7
  end
end
