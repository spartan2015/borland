object Form1: TForm1
  Left = 204
  Top = 200
  Width = 640
  Height = 237
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  PixelsPerInch = 96
  TextHeight = 13
  object CGauge1: TCGauge
    Left = 128
    Top = 48
    Width = 417
    Height = 25
  end
  object ProgressBar1: TProgressBar
    Left = 128
    Top = 88
    Width = 417
    Height = 16
    Min = 0
    Max = 100
    TabOrder = 0
  end
  object TrackBar1: TTrackBar
    Left = 128
    Top = 112
    Width = 425
    Height = 33
    Max = 100
    Orientation = trHorizontal
    Frequency = 1
    Position = 0
    SelEnd = 0
    SelStart = 0
    TabOrder = 1
    TickMarks = tmBottomRight
    TickStyle = tsAuto
  end
  object Animate1: TAnimate
    Left = 208
    Top = 152
    Width = 260
    Height = 40
    Active = False
    FileName = 'D:\Borland Projects\AVI\filecopy.avi'
    Repetitions = 1
    StopFrame = 17
  end
  object Animate2: TAnimate
    Left = 8
    Top = 96
    Width = 80
    Height = 48
    Active = False
    FileName = 'D:\Borland Projects\AVI\search.avi'
    Repetitions = 1
    StopFrame = 29
  end
  object Animate3: TAnimate
    Left = 8
    Top = 40
    Width = 80
    Height = 48
    Active = False
    FileName = 'D:\Borland Projects\AVI\dillo.avi'
    Repetitions = 1
    StopFrame = 71
  end
  object Timer1: TTimer
    Interval = 10
    OnTimer = Timer1Timer
    Left = 8
    Top = 8
  end
end
