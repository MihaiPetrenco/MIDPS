object Form1: TForm1
  Left = 827
  Top = 150
  Width = 488
  Height = 282
  Caption = 'MIDPS'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object TextCenter: TLabel
    Left = 192
    Top = 104
    Width = 176
    Height = 25
    Caption = 'Cronometru'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'BankGothic Md BT'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object TextUpper: TLabel
    Left = 48
    Top = 8
    Width = 353
    Height = 17
    Caption = 'Realizarea cronometrului C++ Builder'
    Font.Charset = ANSI_CHARSET
    Font.Color = clRed
    Font.Height = -16
    Font.Name = 'BankGothic Md BT'
    Font.Style = []
    ParentFont = False
  end
  object START: TButton
    Left = 8
    Top = 88
    Width = 121
    Height = 33
    Caption = 'START'
    TabOrder = 0
    OnClick = STARTClick
  end
  object STOP: TButton
    Left = 8
    Top = 136
    Width = 121
    Height = 33
    Caption = 'STOP'
    TabOrder = 1
    OnClick = STOPClick
  end
  object RESET: TButton
    Left = 8
    Top = 184
    Width = 121
    Height = 33
    Caption = 'RESET'
    TabOrder = 2
    OnClick = RESETClick
  end
  object EXIT: TButton
    Left = 344
    Top = 184
    Width = 121
    Height = 33
    Caption = 'EXIT'
    TabOrder = 3
    OnClick = EXITClick
  end
  object StopwatchEdit: TEdit
    Left = 144
    Top = 184
    Width = 185
    Height = 25
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'BankGothic Lt BT'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    Text = 'StopwatchEdit'
  end
  object TimerEdit: TEdit
    Left = 48
    Top = 24
    Width = 353
    Height = 25
    Font.Charset = ANSI_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'BankGothic Lt BT'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    Text = 'TimerEdit'
  end
  object Time: TTimer
    OnTimer = TimeTimer
    Left = 8
    Top = 8
  end
  object Stopwatch: TTimer
    Interval = 100
    OnTimer = StopwatchTimer
    Left = 8
    Top = 48
  end
end
