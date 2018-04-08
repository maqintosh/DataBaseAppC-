object Form4: TForm4
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSizeToolWin
  Caption = 'Dodawanie zdj'#281#263
  ClientHeight = 450
  ClientWidth = 750
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
    Top = 385
    Width = 750
    Height = 65
    Align = alBottom
    Caption = 'Powr'#243't'
    OnClick = SpeedButton1Click
    ExplicitLeft = 634
    ExplicitTop = 387
    ExplicitWidth = 119
  end
  object Image1: TImage
    Left = 0
    Top = 0
    Width = 274
    Height = 242
    Stretch = True
  end
  object SpeedButton2: TSpeedButton
    Left = 0
    Top = 248
    Width = 274
    Height = 105
    Caption = 'WEL WAT WITA'
    OnClick = SpeedButton2Click
  end
  object SpeedButton3: TSpeedButton
    Left = 280
    Top = 48
    Width = 233
    Height = 65
    Caption = 'Pokaz'
    OnClick = SpeedButton3Click
  end
  object SpeedButton4: TSpeedButton
    Left = 511
    Top = 48
    Width = 233
    Height = 65
    Caption = 'Dodaj zdjecie'
    OnClick = SpeedButton4Click
  end
  object Label1: TLabel
    Left = 429
    Top = 133
    Width = 171
    Height = 13
    Caption = 'WPISZ ID WYBRANEGO SAMOLOTU'
  end
  object Edit1: TEdit
    Left = 280
    Top = 8
    Width = 465
    Height = 21
    TabOrder = 0
  end
  object ListBox1: TListBox
    AlignWithMargins = True
    Left = 280
    Top = 176
    Width = 465
    Height = 203
    ItemHeight = 13
    TabOrder = 1
  end
  object Memo1: TMemo
    Left = 280
    Top = 152
    Width = 465
    Height = 18
    TabOrder = 2
  end
  object OpenDialog1: TOpenDialog
    FileName = 'C:\Users\Mateusz Cie'#347'li'#324'ski\Desktop\BAZA DANYCH PROJEKT\wel.png'
    Left = 8
    Top = 384
  end
  object SaveDialog1: TSaveDialog
    Left = 64
    Top = 384
  end
  object OpenPictureDialog1: TOpenPictureDialog
    FileName = 'C:\Users\Mateusz Cie'#347'li'#324'ski\Desktop\BAZA DANYCH PROJEKT\wel.png'
    Filter = 
      'All (*.gif;*.png;*.jpg;*.jpeg;*.bmp;*.jpg;*.jpeg;*.gif;*.png;*.t' +
      'if;*.tiff;*.ico;*.emf;*.wmf)|*.gif;*.png;*.jpg;*.jpeg;*.bmp;*.jp' +
      'g;*.jpeg;*.gif;*.png;*.tif;*.tiff;*.ico;*.emf;*.wmf|GIF Image (*' +
      '.gif)|*.gif|Portable Network Graphics (*.png)|*.png|JPEG Image F' +
      'ile (*.jpg)|*.jpg|JPEG Image File (*.jpeg)|*.jpeg|Bitmaps (*.bmp' +
      ')|*.bmp|JPEG Images (*.jpg)|*.jpg|JPEG Images (*.jpeg)|*.jpeg|GI' +
      'F Images (*.gif)|*.gif|PNG Images (*.png)|*.png|TIFF Images (*.t' +
      'if)|*.tif|TIFF Images (*.tiff)|*.tiff|Icons (*.ico)|*.ico|Enhanc' +
      'ed Metafiles (*.emf)|*.emf|Metafiles (*.wmf)|*.wmf'
    Left = 120
    Top = 384
  end
  object SavePictureDialog1: TSavePictureDialog
    Filter = 
      'All (*.gif;*.png;*.jpg;*.jpeg;*.bmp;*.jpg;*.jpeg;*.gif;*.png;*.t' +
      'if;*.tiff;*.ico;*.emf;*.wmf)|*.gif;*.png;*.jpg;*.jpeg;*.bmp;*.jp' +
      'g;*.jpeg;*.gif;*.png;*.tif;*.tiff;*.ico;*.emf;*.wmf|GIF Image (*' +
      '.gif)|*.gif|Portable Network Graphics (*.png)|*.png|JPEG Image F' +
      'ile (*.jpg)|*.jpg|JPEG Image File (*.jpeg)|*.jpeg|Bitmaps (*.bmp' +
      ')|*.bmp|JPEG Images (*.jpg)|*.jpg|JPEG Images (*.jpeg)|*.jpeg|GI' +
      'F Images (*.gif)|*.gif|PNG Images (*.png)|*.png|TIFF Images (*.t' +
      'if)|*.tif|TIFF Images (*.tiff)|*.tiff|Icons (*.ico)|*.ico|Enhanc' +
      'ed Metafiles (*.emf)|*.emf|Metafiles (*.wmf)|*.wmf'
    Left = 176
    Top = 384
  end
  object zdjeciesamolot: TADOTable
    Connection = Form3.ADOConnection1
    CursorType = ctStatic
    TableName = 'zdjeciesamolot'
    Left = 240
    Top = 384
  end
  object samolot: TADOTable
    Connection = Form3.ADOConnection1
    CursorType = ctStatic
    TableName = 'samolot'
    Left = 288
    Top = 384
  end
end
