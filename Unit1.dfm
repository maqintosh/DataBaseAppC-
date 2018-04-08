object Form1: TForm1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSizeToolWin
  Caption = 'Wy'#347'wietlanie danych'
  ClientHeight = 450
  ClientWidth = 745
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton1: TSpeedButton
    Left = 0
    Top = 380
    Width = 745
    Height = 70
    Align = alBottom
    Caption = 'Wr'#243#263' do menu g'#322#243'wnego'
    OnClick = SpeedButton1Click
    ExplicitLeft = 675
    ExplicitTop = 0
    ExplicitWidth = 450
  end
  object Label1: TLabel
    Left = 616
    Top = 306
    Width = 99
    Height = 16
    Caption = 'WYBIERZ TABEL'#280
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object DBNavigator1: TDBNavigator
    Left = 0
    Top = 312
    Width = 580
    Height = 52
    DataSource = Form3.wyswietlanietabela
    TabOrder = 0
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 0
    Width = 745
    Height = 306
    DataSource = Form3.wyswietlanietabela
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object ComboBox1: TComboBox
    Left = 592
    Top = 328
    Width = 143
    Height = 21
    TabOrder = 2
    Text = 'samolot'
    OnChange = ComboBox1Change
    Items.Strings = (
      'zdjeciesamolot'
      'logoproducenta'
      'samolot'
      'wprodukcji'
      'rodzaj'
      'kraj'
      'przewoznik'
      'listaprzewoznikow')
  end
end
