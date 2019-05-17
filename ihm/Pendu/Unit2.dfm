object IP_Destinataire: TIP_Destinataire
  Left = 383
  Top = 319
  Width = 316
  Height = 117
  Caption = 'IP_Destinataire'
  Color = clBackground
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 40
    Width = 31
    Height = 24
    Caption = 'IP : '
    FocusControl = Input_IP
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMaroon
    Font.Height = -20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Input_IP: TMaskEdit
    Left = 48
    Top = 32
    Width = 170
    Height = 28
    BevelKind = bkTile
    BiDiMode = bdLeftToRight
    EditMask = '000.000.000.000;1; '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MaxLength = 15
    ParentBiDiMode = False
    ParentFont = False
    TabOrder = 0
    Text = '   .   .   .   '
    OnKeyDown = OnKeyDown_IP_Destinataire
  end
  object Input_Port: TMaskEdit
    Left = 232
    Top = 32
    Width = 53
    Height = 28
    EditMask = '!99999;1; '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MaxLength = 5
    ParentFont = False
    TabOrder = 1
    Text = '   80'
    OnKeyDown = OnKeyDown_IP_Destinataire
  end
end
