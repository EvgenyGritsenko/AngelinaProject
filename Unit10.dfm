object Form10: TForm10
  Left = 0
  Top = 0
  Caption = #1056#1072#1073#1086#1090#1072' '#1089#1086' '#1089#1090#1088#1086#1082#1072#1084#1080
  ClientHeight = 554
  ClientWidth = 850
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Edit1: TEdit
    Left = 352
    Top = 32
    Width = 265
    Height = 36
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object AddButton: TButton
    Left = 648
    Top = 32
    Width = 177
    Height = 36
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1089#1090#1088#1086#1082#1091
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = AddButtonClick
  end
  object DeleteButton: TButton
    Left = 648
    Top = 104
    Width = 177
    Height = 36
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1089#1090#1088#1086#1082#1091
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = DeleteButtonClick
  end
  object ComboBox1: TComboBox
    Left = 8
    Top = 32
    Width = 297
    Height = 36
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnChange = ComboBox1Change
  end
  object Memo1: TMemo
    Left = 352
    Top = 160
    Width = 473
    Height = 386
    Lines.Strings = (
      '')
    ReadOnly = True
    TabOrder = 4
  end
end
