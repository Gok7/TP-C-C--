object Form1: TForm1
  Left = 226
  Top = 139
  Width = 1088
  Height = 563
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Edit1: TEdit
    Left = 160
    Top = 96
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object VALIDER: TButton
    Left = 368
    Top = 96
    Width = 75
    Height = 25
    Caption = 'VALIDER'
    TabOrder = 1
    OnClick = VALIDERClick
  end
  object OUVRIRE_FENETRE: TButton
    Left = 360
    Top = 176
    Width = 161
    Height = 25
    Caption = 'OUVRIRE FENETRE'
    TabOrder = 2
    OnClick = OUVRIRE_FENETREClick
  end
  object VALIDER_FENETRE: TButton
    Left = 568
    Top = 176
    Width = 145
    Height = 25
    Caption = 'VALIDER FENETRE'
    TabOrder = 3
    OnClick = VALIDER_FENETREClick
  end
  object AFFICHER: TButton
    Left = 120
    Top = 280
    Width = 145
    Height = 25
    Caption = 'AFFICHER'
    TabOrder = 4
    OnClick = AFFICHERClick
  end
  object Edit2: TEdit
    Left = 296
    Top = 288
    Width = 121
    Height = 21
    TabOrder = 5
    Text = 'Edit2'
  end
  object QUITTER: TButton
    Left = 608
    Top = 280
    Width = 113
    Height = 25
    Caption = 'QUITTER'
    TabOrder = 6
    OnClick = QUITTERClick
  end
end
