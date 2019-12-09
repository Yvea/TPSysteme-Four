object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 243
  ClientWidth = 472
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 176
    Top = 25
    Width = 48
    Height = 24
    Caption = '        '
    Color = clRed
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Transparent = False
  end
  object btnInitialisationCarte: TButton
    Left = 32
    Top = 24
    Width = 75
    Height = 25
    Caption = 'btnInitialisationCarte'
    TabOrder = 0
    OnClick = btnInitialisationCarteClick
  end
  object Button1: TButton
    Left = 32
    Top = 68
    Width = 75
    Height = 25
    Caption = 'Acquisition'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 176
    Top = 72
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object Ecriture: TButton
    Left = 32
    Top = 112
    Width = 75
    Height = 25
    Caption = 'Ecriture'
    TabOrder = 3
    OnClick = EcritureClick
  end
  object Edit2: TEdit
    Left = 176
    Top = 116
    Width = 121
    Height = 21
    TabOrder = 4
  end
end
