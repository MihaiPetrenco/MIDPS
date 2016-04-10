object Form1: TForm1
  Left = 791
  Top = 143
  Width = 470
  Height = 304
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
    Top = 24
    Width = 421
    Height = 19
    Caption = 'Incrementare/Decrementare Contor'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'BankGothic Md BT'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object VariableText: TLabel
    Left = 112
    Top = 48
    Width = 108
    Height = 17
    Caption = 'VariableText'
    Font.Charset = ANSI_CHARSET
    Font.Color = clRed
    Font.Height = -16
    Font.Name = 'BankGothic Lt BT'
    Font.Style = []
    ParentFont = False
  end
  object Increment: TButton
    Left = 32
    Top = 96
    Width = 105
    Height = 33
    Caption = 'Incrementare'
    TabOrder = 0
    OnClick = IncrementClick
  end
  object Decrement: TButton
    Left = 32
    Top = 200
    Width = 105
    Height = 33
    Caption = 'Decrementare'
    TabOrder = 1
    OnClick = DecrementClick
  end
  object Exit: TButton
    Left = 312
    Top = 200
    Width = 105
    Height = 33
    Caption = 'Exit'
    TabOrder = 2
    OnClick = ExitClick
  end
  object Variable: TEdit
    Left = 160
    Top = 152
    Width = 113
    Height = 21
    TabOrder = 3
    Text = 'Variable'
  end
end
