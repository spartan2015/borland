object cproduse: Tcproduse
  Left = 128
  Top = 122
  Width = 876
  Height = 479
  Caption = 'cproduse'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 20
  object SpeedButton1: TSpeedButton
    Left = 800
    Top = 424
    Width = 65
    Height = 22
    Caption = 'OK'
    OnClick = SpeedButton1Click
  end
  object SpeedButton2: TSpeedButton
    Left = 680
    Top = 216
    Width = 57
    Height = 22
    Caption = 'Add'
    OnClick = SpeedButton2Click
  end
  object SpeedButton3: TSpeedButton
    Left = 680
    Top = 152
    Width = 57
    Height = 22
    Caption = 'Sterge'
    OnClick = SpeedButton3Click
  end
  object SpeedButton4: TSpeedButton
    Left = 0
    Top = 403
    Width = 23
    Height = 22
    Caption = '+'
    OnClick = SpeedButton4Click
  end
  object SpeedButton5: TSpeedButton
    Left = 409
    Top = 404
    Width = 23
    Height = 22
    Caption = '-'
    OnClick = SpeedButton5Click
  end
  object SpeedButton6: TSpeedButton
    Left = 680
    Top = 184
    Width = 57
    Height = 22
    Caption = 'Save'
    OnClick = SpeedButton6Click
  end
  object SpeedButton7: TSpeedButton
    Left = 752
    Top = 384
    Width = 23
    Height = 22
    Caption = '+'
    OnClick = SpeedButton7Click
  end
  object SpeedButton8: TSpeedButton
    Left = 840
    Top = 384
    Width = 23
    Height = 22
    Caption = '-'
    OnClick = SpeedButton8Click
  end
  object Label1: TLabel
    Left = 24
    Top = 248
    Width = 86
    Height = 20
    Caption = 'Pret furnizor'
  end
  object Label2: TLabel
    Left = 488
    Top = 248
    Width = 218
    Height = 20
    Caption = 'Pret furnizor + adaos comercial'
  end
  object Bevel1: TBevel
    Left = -1
    Top = 244
    Width = 869
    Height = 4
    Shape = bsBottomLine
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 8
    Width = 673
    Height = 209
    DataSource = dm.dscproduse
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit]
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'cod'
        Width = 60
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'denumire'
        Width = 260
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'clasa'
        Width = 150
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'um'
        Width = 40
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'tva'
        Width = 40
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'cont'
        Width = 80
        Visible = True
      end>
  end
  object DBGrid2: TDBGrid
    Left = 0
    Top = 272
    Width = 433
    Height = 105
    DataSource = dm.dscpreturi
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit]
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'cod_furnizor'
        Width = 50
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'furnizor'
        Width = 250
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'pret'
        Visible = True
      end>
  end
  object DBEdit1: TDBEdit
    Left = 0
    Top = 216
    Width = 73
    Height = 28
    DataField = 'cod'
    DataSource = dm.dscproduse
    TabOrder = 2
  end
  object DBEdit2: TDBEdit
    Left = 72
    Top = 216
    Width = 265
    Height = 28
    DataField = 'denumire'
    DataSource = dm.dscproduse
    TabOrder = 3
  end
  object DBEdit3: TDBEdit
    Left = 336
    Top = 216
    Width = 145
    Height = 28
    DataField = 'clasa'
    DataSource = dm.dscproduse
    TabOrder = 4
  end
  object DBEdit4: TDBEdit
    Left = 480
    Top = 216
    Width = 49
    Height = 28
    DataField = 'um'
    DataSource = dm.dscproduse
    TabOrder = 5
  end
  object DBEdit5: TDBEdit
    Left = 528
    Top = 216
    Width = 41
    Height = 28
    DataField = 'tva'
    DataSource = dm.dscproduse
    TabOrder = 6
  end
  object DBEdit6: TDBEdit
    Left = 568
    Top = 216
    Width = 105
    Height = 28
    DataField = 'cont'
    DataSource = dm.dscproduse
    TabOrder = 7
  end
  object DBEdit7: TDBEdit
    Left = 0
    Top = 376
    Width = 65
    Height = 28
    DataField = 'cod_furnizor'
    DataSource = dm.dscpreturi
    TabOrder = 8
  end
  object DBEdit8: TDBEdit
    Left = 64
    Top = 376
    Width = 249
    Height = 28
    DataField = 'furnizor'
    DataSource = dm.dscpreturi
    TabOrder = 9
  end
  object DBEdit9: TDBEdit
    Left = 312
    Top = 376
    Width = 121
    Height = 28
    DataField = 'pret'
    DataSource = dm.dscpreturi
    TabOrder = 10
  end
  object DBGrid3: TDBGrid
    Left = 440
    Top = 272
    Width = 425
    Height = 105
    DataSource = dm.dspreturiiesire
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit]
    TabOrder = 11
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -16
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'detalii'
        Width = 250
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'adaos'
        Width = 40
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'pret'
        Width = 100
        Visible = True
      end>
  end
  object DBEdit10: TDBEdit
    Left = 440
    Top = 376
    Width = 265
    Height = 28
    DataField = 'detalii'
    DataSource = dm.dspreturiiesire
    TabOrder = 12
  end
  object DBEdit11: TDBEdit
    Left = 704
    Top = 376
    Width = 41
    Height = 28
    DataField = 'adaos'
    DataSource = dm.dspreturiiesire
    TabOrder = 13
  end
end
