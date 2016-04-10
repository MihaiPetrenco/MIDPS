object Form1: TForm1
  Left = 796
  Top = 236
  Width = 513
  Height = 397
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
  object Title: TLabel
    Left = 16
    Top = 8
    Width = 468
    Height = 19
    Caption = 'Resurse grafice a mediului C++ Builder'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'BankGothic Md BT'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DrawingArea: TPaintBox
    Left = 256
    Top = 104
    Width = 233
    Height = 201
  end
  object Label1: TLabel
    Left = 256
    Top = 40
    Width = 179
    Height = 17
    Caption = 'Data si ora curenta:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clRed
    Font.Height = -16
    Font.Name = 'BankGothic Lt BT'
    Font.Style = []
    ParentFont = False
  end
  object TimeEdit: TEdit
    Left = 256
    Top = 64
    Width = 233
    Height = 25
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'BankGothic Lt BT'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Text = 'TimeEdit'
  end
  object PanelBlack: TPanel
    Left = 184
    Top = 104
    Width = 57
    Height = 201
    TabOrder = 1
    object PanelRed: TPanel
      Left = 0
      Top = 0
      Width = 57
      Height = 201
      TabOrder = 0
    end
  end
  object EXIT: TBitBtn
    Left = 16
    Top = 272
    Width = 105
    Height = 33
    Caption = 'EXIT'
    TabOrder = 2
    OnClick = EXITClick
  end
  object STOP: TBitBtn
    Left = 16
    Top = 160
    Width = 105
    Height = 33
    Caption = 'STOP'
    TabOrder = 3
    OnClick = STOPClick
  end
  object START: TBitBtn
    Left = 16
    Top = 104
    Width = 105
    Height = 33
    Caption = 'START'
    TabOrder = 4
    OnClick = STARTClick
  end
  object RESET: TButton
    Left = 16
    Top = 216
    Width = 105
    Height = 33
    Caption = 'RESET'
    TabOrder = 5
    OnClick = RESETClick
  end
  object Time: TTimer
    OnTimer = TimeTimer
    Left = 16
    Top = 48
  end
  object DrawTimer: TTimer
    OnTimer = DrawTimerTimer
    Left = 64
    Top = 48
  end
end
