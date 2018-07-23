object banca: Tbanca
  Left = 197
  Top = 151
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Selectare banca'
  ClientHeight = 229
  ClientWidth = 700
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 20
  object SpeedButton1: TSpeedButton
    Left = 0
    Top = 32
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
  end
  object SpeedButton2: TSpeedButton
    Left = 0
    Top = 56
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
  end
  object Label1: TLabel
    Left = 24
    Top = 8
    Width = 46
    Height = 20
    Caption = 'Banca'
  end
  object Label2: TLabel
    Left = 232
    Top = 8
    Width = 62
    Height = 20
    Caption = 'Moneda:'
  end
  object Label3: TLabel
    Left = 472
    Top = 8
    Width = 34
    Height = 20
    Caption = 'Cont'
  end
  object DBGrid1: TDBGrid
    Left = 24
    Top = 32
    Width = 585
    Height = 120
    Color = clBlack
    DataSource = dm.DataSource12
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'banca'
        Width = 200
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'moneda'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'cont'
        Width = 150
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'legatura'
        Visible = True
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 24
    Top = 152
    Width = 240
    Height = 25
    DataSource = dm.DataSource12
    TabOrder = 1
  end
  object Button1: TButton
    Left = 616
    Top = 32
    Width = 75
    Height = 25
    Caption = 'Nou'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 616
    Top = 64
    Width = 75
    Height = 25
    Caption = 'Sterge'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 224
    Top = 192
    Width = 75
    Height = 25
    Caption = 'Acces'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 456
    Top = 192
    Width = 75
    Height = 25
    Caption = 'Inapoi'
    TabOrder = 5
    OnClick = Button4Click
  end
  object Edit1: TEdit
    Left = 80
    Top = 3
    Width = 145
    Height = 28
    TabOrder = 6
  end
  object Edit2: TEdit
    Left = 304
    Top = 3
    Width = 161
    Height = 28
    TabOrder = 7
  end
  object Edit3: TEdit
    Left = 520
    Top = 0
    Width = 169
    Height = 28
    TabOrder = 8
  end
end
