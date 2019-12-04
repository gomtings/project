<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="14008000">
	<Item Name="내 컴퓨터" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">내 컴퓨터/VI 서버</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">내 컴퓨터/VI 서버</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="subVI" Type="Folder">
			<Item Name="ip address.vi" Type="VI" URL="../subVI/ip address.vi"/>
			<Item Name="날자의 참거짓 판별(SubVI).vi" Type="VI" URL="../subVI/날자의 참거짓 판별(SubVI).vi"/>
			<Item Name="시간 저장(SubVI).vi" Type="VI" URL="../subVI/시간 저장(SubVI).vi"/>
			<Item Name="저장된시간을 숫자로(SubVI).vi" Type="VI" URL="../subVI/저장된시간을 숫자로(SubVI).vi"/>
			<Item Name="현재날자(SubVI).vi" Type="VI" URL="../subVI/현재날자(SubVI).vi"/>
			<Item Name="현재시간(SubVI).vi" Type="VI" URL="../subVI/현재시간(SubVI).vi"/>
		</Item>
		<Item Name="ATC app output.txt" Type="Document" URL="../ATC app output.txt"/>
		<Item Name="atc.bmp" Type="Document" URL="../atc.bmp"/>
		<Item Name="atc.ico" Type="Document" URL="../atc.ico"/>
		<Item Name="atc.png" Type="Document" URL="../atc.png"/>
		<Item Name="ATC.rtf" Type="Document" URL="../ATC.rtf"/>
		<Item Name="ATC예문.vi" Type="VI" URL="../ATC예문.vi"/>
		<Item Name="explanation.rtf" Type="Document" URL="../explanation.rtf"/>
		<Item Name="feedback.vi" Type="VI" URL="../feedback.vi"/>
		<Item Name="lisence key.pbfs" Type="Document" URL="../lisence key.pbfs"/>
		<Item Name="popup.vi" Type="VI" URL="../popup.vi"/>
		<Item Name="serial del.vi" Type="VI" URL="../serial del.vi"/>
		<Item Name="serial key 생성기.vi" Type="VI" URL="../serial key 생성기.vi"/>
		<Item Name="serial key.pbfs" Type="Document" URL="../serial key.pbfs"/>
		<Item Name="setup complete.vi" Type="VI" URL="../setup complete.vi"/>
		<Item Name="update setup complete.vi" Type="VI" URL="../update setup complete.vi"/>
		<Item Name="사운드.vi" Type="VI" URL="../../../사운드.vi"/>
		<Item Name="의존성" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="_Get Sound Error From Return Value.vi" Type="VI" URL="/&lt;vilib&gt;/sound2/lvsound2.llb/_Get Sound Error From Return Value.vi"/>
				<Item Name="_GetConfiguration.vi" Type="VI" URL="/&lt;vilib&gt;/sound2/lvsound2.llb/_GetConfiguration.vi"/>
				<Item Name="Beep.vi" Type="VI" URL="/&lt;vilib&gt;/Platform/system.llb/Beep.vi"/>
				<Item Name="BuildHelpPath.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/BuildHelpPath.vi"/>
				<Item Name="Check if File or Folder Exists.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/libraryn.llb/Check if File or Folder Exists.vi"/>
				<Item Name="Check Special Tags.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Check Special Tags.vi"/>
				<Item Name="Clear Errors.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Clear Errors.vi"/>
				<Item Name="Convert property node font to graphics font.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Convert property node font to graphics font.vi"/>
				<Item Name="Details Display Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Details Display Dialog.vi"/>
				<Item Name="DialogType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogType.ctl"/>
				<Item Name="DialogTypeEnum.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogTypeEnum.ctl"/>
				<Item Name="Error Cluster From Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Cluster From Error Code.vi"/>
				<Item Name="Error Code Database.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Code Database.vi"/>
				<Item Name="ErrWarn.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/ErrWarn.ctl"/>
				<Item Name="eventvkey.ctl" Type="VI" URL="/&lt;vilib&gt;/event_ctls.llb/eventvkey.ctl"/>
				<Item Name="ex_CorrectErrorChain.vi" Type="VI" URL="/&lt;vilib&gt;/express/express shared/ex_CorrectErrorChain.vi"/>
				<Item Name="Find Tag.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Find Tag.vi"/>
				<Item Name="Format Message String.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Format Message String.vi"/>
				<Item Name="General Error Handler Core CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler Core CORE.vi"/>
				<Item Name="General Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler.vi"/>
				<Item Name="Get String Text Bounds.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Get String Text Bounds.vi"/>
				<Item Name="Get System Directory.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/sysdir.llb/Get System Directory.vi"/>
				<Item Name="Get Text Rect.vi" Type="VI" URL="/&lt;vilib&gt;/picture/picture.llb/Get Text Rect.vi"/>
				<Item Name="GetHelpDir.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetHelpDir.vi"/>
				<Item Name="GetRTHostConnectedProp.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetRTHostConnectedProp.vi"/>
				<Item Name="LabVIEWSMTPClient.lvlib" Type="Library" URL="/&lt;vilib&gt;/smtpClient/LabVIEWSMTPClient.lvlib"/>
				<Item Name="Longest Line Length in Pixels.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Longest Line Length in Pixels.vi"/>
				<Item Name="LVBoundsTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVBoundsTypeDef.ctl"/>
				<Item Name="LVRectTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVRectTypeDef.ctl"/>
				<Item Name="NI_FileType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/lvfile.llb/NI_FileType.lvlib"/>
				<Item Name="NI_PackedLibraryUtility.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/LVLibp/NI_PackedLibraryUtility.lvlib"/>
				<Item Name="Not Found Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Not Found Dialog.vi"/>
				<Item Name="Path To Command Line String.vi" Type="VI" URL="/&lt;vilib&gt;/AdvancedString/Path To Command Line String.vi"/>
				<Item Name="PathToUNIXPathString.vi" Type="VI" URL="/&lt;vilib&gt;/Platform/CFURL.llb/PathToUNIXPathString.vi"/>
				<Item Name="Play Sound File.vi" Type="VI" URL="/&lt;vilib&gt;/sound2/lvsound2.llb/Play Sound File.vi"/>
				<Item Name="Search and Replace Pattern.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Search and Replace Pattern.vi"/>
				<Item Name="Set Bold Text.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set Bold Text.vi"/>
				<Item Name="Set String Value.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set String Value.vi"/>
				<Item Name="Simple Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Simple Error Handler.vi"/>
				<Item Name="Sound Output Clear.vi" Type="VI" URL="/&lt;vilib&gt;/sound2/lvsound2.llb/Sound Output Clear.vi"/>
				<Item Name="Sound Output Info.vi" Type="VI" URL="/&lt;vilib&gt;/sound2/lvsound2.llb/Sound Output Info.vi"/>
				<Item Name="Sound Output Stop.vi" Type="VI" URL="/&lt;vilib&gt;/sound2/lvsound2.llb/Sound Output Stop.vi"/>
				<Item Name="Sound Output Task ID.ctl" Type="VI" URL="/&lt;vilib&gt;/sound2/lvsound2.llb/Sound Output Task ID.ctl"/>
				<Item Name="Sound Output Wait.vi" Type="VI" URL="/&lt;vilib&gt;/sound2/lvsound2.llb/Sound Output Wait.vi"/>
				<Item Name="Space Constant.vi" Type="VI" URL="/&lt;vilib&gt;/dlg_ctls.llb/Space Constant.vi"/>
				<Item Name="subDisplayMessage.vi" Type="VI" URL="/&lt;vilib&gt;/express/express output/DisplayMessageBlock.llb/subDisplayMessage.vi"/>
				<Item Name="System Directory Type.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/sysdir.llb/System Directory Type.ctl"/>
				<Item Name="System Exec.vi" Type="VI" URL="/&lt;vilib&gt;/Platform/system.llb/System Exec.vi"/>
				<Item Name="TagReturnType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/TagReturnType.ctl"/>
				<Item Name="Three Button Dialog CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog CORE.vi"/>
				<Item Name="Three Button Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog.vi"/>
				<Item Name="Trim Whitespace.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Trim Whitespace.vi"/>
				<Item Name="whitespace.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/whitespace.ctl"/>
			</Item>
			<Item Name="lvsound2.dll" Type="Document" URL="/&lt;resource&gt;/lvsound2.dll"/>
		</Item>
		<Item Name="빌드 스펙" Type="Build">
			<Item Name="(update)ATC app setup" Type="Installer">
				<Property Name="Destination[0].name" Type="Str">ATC app</Property>
				<Property Name="Destination[0].parent" Type="Str">{3912416A-D2E5-411B-AFEE-B63654D690C0}</Property>
				<Property Name="Destination[0].tag" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Destination[0].type" Type="Str">userFolder</Property>
				<Property Name="DestinationCount" Type="Int">1</Property>
				<Property Name="INST_autoIncrement" Type="Bool">true</Property>
				<Property Name="INST_buildLocation" Type="Path">../ATC app/(update)ATC app setup/ATC app</Property>
				<Property Name="INST_buildLocation.type" Type="Str">relativeToCommon</Property>
				<Property Name="INST_buildSpecName" Type="Str">(update)ATC app setup</Property>
				<Property Name="INST_defaultDir" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="INST_includeError" Type="Bool">false</Property>
				<Property Name="INST_language" Type="Int">18</Property>
				<Property Name="INST_productName" Type="Str">ATC app</Property>
				<Property Name="INST_productVersion" Type="Str">3.0.4</Property>
				<Property Name="INST_readmeID" Type="Ref">/내 컴퓨터/explanation.rtf</Property>
				<Property Name="InstSpecBitness" Type="Str">32-bit</Property>
				<Property Name="InstSpecVersion" Type="Str">14008036</Property>
				<Property Name="MSI_arpCompany" Type="Str">Polor Bear Team</Property>
				<Property Name="MSI_arpPhone" Type="Str">tkddn4508@naver.com</Property>
				<Property Name="MSI_arpURL" Type="Str">tkddn4508@naver.com</Property>
				<Property Name="MSI_bannerImageID" Type="Ref">/내 컴퓨터/atc.bmp</Property>
				<Property Name="MSI_distID" Type="Str">{48F5EDF6-5018-47FC-AF5E-CF669DE4633B}</Property>
				<Property Name="MSI_licenseID" Type="Ref">/내 컴퓨터/ATC.rtf</Property>
				<Property Name="MSI_osCheck" Type="Int">0</Property>
				<Property Name="MSI_upgradeCode" Type="Str">{BF6DFD1F-868D-4B29-BE67-10468843EFBF}</Property>
				<Property Name="MSI_welcomeImageID" Type="Ref">/내 컴퓨터/atc.bmp</Property>
				<Property Name="MSI_windowMessage" Type="Str">ATC app 3.0.0.55 업데이트

주요기능 업데이트:
1.도움말 기능이 추가되었습니다.
2.피드백 기능이 추가되었습니다.
</Property>
				<Property Name="MSI_windowTitle" Type="Str">(update)ATC app setup </Property>
				<Property Name="RegDest[0].dirName" Type="Str">Software</Property>
				<Property Name="RegDest[0].dirTag" Type="Str">{DDFAFC8B-E728-4AC8-96DE-B920EBB97A86}</Property>
				<Property Name="RegDest[0].parentTag" Type="Str">2</Property>
				<Property Name="RegDestCount" Type="Int">1</Property>
				<Property Name="Source[0].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[0].File[0].attributes" Type="Int">519</Property>
				<Property Name="Source[0].File[0].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[0].File[0].name" Type="Str">update setup complete.exe</Property>
				<Property Name="Source[0].File[0].runEXE" Type="Bool">true</Property>
				<Property Name="Source[0].File[0].tag" Type="Str">{7D396963-D8CE-49D6-94AB-827682B220F5}</Property>
				<Property Name="Source[0].File[1].attributes" Type="Int">519</Property>
				<Property Name="Source[0].File[1].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[0].File[1].name" Type="Str">update setup complete.aliases</Property>
				<Property Name="Source[0].File[1].tag" Type="Str">{EE287A20-C858-4F43-8A6E-1FD4DA8F7E50}</Property>
				<Property Name="Source[0].File[2].attributes" Type="Int">519</Property>
				<Property Name="Source[0].File[2].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[0].File[2].name" Type="Str">update setup complete.ini</Property>
				<Property Name="Source[0].File[2].tag" Type="Str">{3F1F7B24-9957-429E-AF7B-73DDB16EB842}</Property>
				<Property Name="Source[0].File[3].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[0].File[3].name" Type="Str">niwebserver.conf</Property>
				<Property Name="Source[0].File[3].tag" Type="Str">{0598318D-D4E3-4195-9619-AABE8492667F}</Property>
				<Property Name="Source[0].FileCount" Type="Int">3</Property>
				<Property Name="Source[0].name" Type="Str">update setup complete</Property>
				<Property Name="Source[0].tag" Type="Ref">/내 컴퓨터/빌드 스펙/update setup complete</Property>
				<Property Name="Source[0].type" Type="Str">EXE</Property>
				<Property Name="Source[1].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[1].File[0].attributes" Type="Int">519</Property>
				<Property Name="Source[1].File[0].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[1].File[0].name" Type="Str">serial del.exe</Property>
				<Property Name="Source[1].File[0].tag" Type="Str">{442B7701-D6CF-4BC4-A895-D4C5BA961447}</Property>
				<Property Name="Source[1].File[1].attributes" Type="Int">519</Property>
				<Property Name="Source[1].File[1].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[1].File[1].name" Type="Str">serial del.aliases</Property>
				<Property Name="Source[1].File[1].tag" Type="Str">{D37AB374-FE92-4EBB-9F1C-648A891054DD}</Property>
				<Property Name="Source[1].File[2].attributes" Type="Int">519</Property>
				<Property Name="Source[1].File[2].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[1].File[2].name" Type="Str">serial del.ini</Property>
				<Property Name="Source[1].File[2].tag" Type="Str">{2A0E0E5D-3210-483E-A1B0-0FB0C6C87CA3}</Property>
				<Property Name="Source[1].File[3].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[1].File[3].name" Type="Str">niwebserver.conf</Property>
				<Property Name="Source[1].File[3].tag" Type="Str">{5010523B-2017-403D-B30D-CB694F1FEF04}</Property>
				<Property Name="Source[1].FileCount" Type="Int">3</Property>
				<Property Name="Source[1].name" Type="Str">serial del</Property>
				<Property Name="Source[1].tag" Type="Ref">/내 컴퓨터/빌드 스펙/serial del</Property>
				<Property Name="Source[1].type" Type="Str">EXE</Property>
				<Property Name="Source[2].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[2].File[0].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[2].File[0].name" Type="Str">ATC app.exe</Property>
				<Property Name="Source[2].File[0].Shortcut[0].destIndex" Type="Int">1</Property>
				<Property Name="Source[2].File[0].Shortcut[0].name" Type="Str">ATC app</Property>
				<Property Name="Source[2].File[0].Shortcut[0].subDir" Type="Str"></Property>
				<Property Name="Source[2].File[0].Shortcut[1].destIndex" Type="Int">0</Property>
				<Property Name="Source[2].File[0].Shortcut[1].name" Type="Str">ATC app</Property>
				<Property Name="Source[2].File[0].Shortcut[1].subDir" Type="Str"></Property>
				<Property Name="Source[2].File[0].Shortcut[2].destIndex" Type="Int">2</Property>
				<Property Name="Source[2].File[0].Shortcut[2].name" Type="Str">ATC app</Property>
				<Property Name="Source[2].File[0].Shortcut[2].subDir" Type="Str"></Property>
				<Property Name="Source[2].File[0].ShortcutCount" Type="Int">3</Property>
				<Property Name="Source[2].File[0].tag" Type="Str">{20DA7EF6-D442-4369-B072-D0F60717303E}</Property>
				<Property Name="Source[2].File[1].attributes" Type="Int">519</Property>
				<Property Name="Source[2].File[1].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[2].File[1].name" Type="Str">ATC app.aliases</Property>
				<Property Name="Source[2].File[1].tag" Type="Str">{648B2C1B-59CD-4A4F-8BCA-393F5E9849FD}</Property>
				<Property Name="Source[2].File[2].attributes" Type="Int">519</Property>
				<Property Name="Source[2].File[2].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[2].File[2].name" Type="Str">ATC app.ini</Property>
				<Property Name="Source[2].File[2].tag" Type="Str">{CAD89CC0-7E5D-4828-94C3-9219A1E83117}</Property>
				<Property Name="Source[2].File[3].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[2].File[3].name" Type="Str">niwebserver.conf</Property>
				<Property Name="Source[2].File[3].tag" Type="Str">{71E14837-4C55-4602-B81F-65E1408E97EF}</Property>
				<Property Name="Source[2].FileCount" Type="Int">3</Property>
				<Property Name="Source[2].name" Type="Str">ATC app</Property>
				<Property Name="Source[2].tag" Type="Ref">/내 컴퓨터/빌드 스펙/ATC app</Property>
				<Property Name="Source[2].type" Type="Str">EXE</Property>
				<Property Name="Source[3].attributes" Type="Int">516</Property>
				<Property Name="Source[3].dest" Type="Str">{115F5F59-DED6-42E2-8467-4CD042208C47}</Property>
				<Property Name="Source[3].name" Type="Str">lisence key.pbfs</Property>
				<Property Name="Source[3].tag" Type="Ref">/내 컴퓨터/lisence key.pbfs</Property>
				<Property Name="Source[3].type" Type="Str">File</Property>
				<Property Name="Source[4].attributes" Type="Int">516</Property>
				<Property Name="Source[4].dest" Type="Str">{115F5F59-DED6-42E2-8467-4CD042208C47}</Property>
				<Property Name="Source[4].name" Type="Str">serial key.pbfs</Property>
				<Property Name="Source[4].tag" Type="Ref">/내 컴퓨터/serial key.pbfs</Property>
				<Property Name="Source[4].type" Type="Str">File</Property>
				<Property Name="Source[5].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[5].File[0].attributes" Type="Int">519</Property>
				<Property Name="Source[5].File[0].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[5].File[0].name" Type="Str">feedback.exe</Property>
				<Property Name="Source[5].File[0].tag" Type="Str">{D101F57E-DF75-4C7E-A201-522C50321F2E}</Property>
				<Property Name="Source[5].File[1].attributes" Type="Int">519</Property>
				<Property Name="Source[5].File[1].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[5].File[1].name" Type="Str">feedback.aliases</Property>
				<Property Name="Source[5].File[1].tag" Type="Str">{B7C2E261-FC1A-47FB-AB54-B769B419DEAA}</Property>
				<Property Name="Source[5].File[2].attributes" Type="Int">519</Property>
				<Property Name="Source[5].File[2].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[5].File[2].name" Type="Str">feedback.ini</Property>
				<Property Name="Source[5].File[2].tag" Type="Str">{8D99B469-3660-4C02-83D6-B56009825EBF}</Property>
				<Property Name="Source[5].File[3].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[5].File[3].name" Type="Str">niwebserver.conf</Property>
				<Property Name="Source[5].File[3].tag" Type="Str">{E14C56CF-180C-442A-8A97-946F1A9DB365}</Property>
				<Property Name="Source[5].FileCount" Type="Int">3</Property>
				<Property Name="Source[5].name" Type="Str">feedback</Property>
				<Property Name="Source[5].tag" Type="Ref">/내 컴퓨터/빌드 스펙/feedback</Property>
				<Property Name="Source[5].type" Type="Str">EXE</Property>
				<Property Name="Source[6].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[6].File[0].attributes" Type="Int">519</Property>
				<Property Name="Source[6].File[0].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[6].File[0].name" Type="Str">popup.exe</Property>
				<Property Name="Source[6].File[0].tag" Type="Str">{B29E840C-4054-4EFF-9179-4831702D6188}</Property>
				<Property Name="Source[6].File[1].attributes" Type="Int">519</Property>
				<Property Name="Source[6].File[1].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[6].File[1].name" Type="Str">popup.aliases</Property>
				<Property Name="Source[6].File[1].tag" Type="Str">{767E9F36-E194-439D-8C33-8CEA741CD90E}</Property>
				<Property Name="Source[6].File[2].attributes" Type="Int">519</Property>
				<Property Name="Source[6].File[2].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[6].File[2].name" Type="Str">popup.ini</Property>
				<Property Name="Source[6].File[2].tag" Type="Str">{484C105A-0F6C-4448-AA08-A1C2629A876F}</Property>
				<Property Name="Source[6].File[3].dest" Type="Str">{A9B4E27F-D51A-4AD8-9250-A5944E3C9120}</Property>
				<Property Name="Source[6].File[3].name" Type="Str">niwebserver.conf</Property>
				<Property Name="Source[6].File[3].tag" Type="Str">{DD8D013C-C1DA-4A66-B099-67C754BE8D8E}</Property>
				<Property Name="Source[6].FileCount" Type="Int">3</Property>
				<Property Name="Source[6].name" Type="Str">popup</Property>
				<Property Name="Source[6].tag" Type="Ref">/내 컴퓨터/빌드 스펙/popup</Property>
				<Property Name="Source[6].type" Type="Str">EXE</Property>
				<Property Name="Source[7].dest" Type="Str">{624309A2-B0CB-4149-B964-A0FF8B968B6A}</Property>
				<Property Name="Source[7].name" Type="Str">ATC app output.txt</Property>
				<Property Name="Source[7].tag" Type="Ref">/내 컴퓨터/ATC app output.txt</Property>
				<Property Name="Source[7].type" Type="Str">File</Property>
				<Property Name="SourceCount" Type="Int">8</Property>
			</Item>
			<Item Name="ATC app" Type="EXE">
				<Property Name="App_INI_aliasGUID" Type="Str">{648B2C1B-59CD-4A4F-8BCA-393F5E9849FD}</Property>
				<Property Name="App_INI_GUID" Type="Str">{CAD89CC0-7E5D-4828-94C3-9219A1E83117}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{899187A0-24A8-4891-BFE7-95E3F7D93DD4}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">ATC app</Property>
				<Property Name="Bld_buildSpecName" Type="Str">ATC app</Property>
				<Property Name="Bld_compilerOptLevel" Type="Int">0</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_localDestDir" Type="Path">../ATC app</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{935E2D7B-BAE6-4712-98F1-25CEE6E7FE3A}</Property>
				<Property Name="Bld_supportedLanguage[0]" Type="Str">English</Property>
				<Property Name="Bld_supportedLanguage[1]" Type="Str">Korean</Property>
				<Property Name="Bld_supportedLanguageCount" Type="Int">2</Property>
				<Property Name="Bld_version.build" Type="Int">57</Property>
				<Property Name="Bld_version.major" Type="Int">3</Property>
				<Property Name="Destination[0].destName" Type="Str">ATC app.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../ATC app/ATC app.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">relativeToProject</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">../ATC app/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">relativeToProject</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref">/내 컴퓨터/atc.ico</Property>
				<Property Name="Source[0].itemID" Type="Str">{C140BB30-DEFF-4897-A1B8-62152202E37C}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/ATC예문.vi</Property>
				<Property Name="Source[1].properties[0].type" Type="Str">Window has title bar</Property>
				<Property Name="Source[1].properties[0].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[1].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[1].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[10].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[1].properties[10].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[2].type" Type="Str">Show vertical scroll bar</Property>
				<Property Name="Source[1].properties[2].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[3].type" Type="Str">Show horizontal scroll bar</Property>
				<Property Name="Source[1].properties[3].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[4].type" Type="Str">Show toolbar</Property>
				<Property Name="Source[1].properties[4].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[5].type" Type="Str">Show Abort button</Property>
				<Property Name="Source[1].properties[5].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[6].type" Type="Str">Show fp when called</Property>
				<Property Name="Source[1].properties[6].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[7].type" Type="Str">Window behavior</Property>
				<Property Name="Source[1].properties[7].value" Type="Str">Default</Property>
				<Property Name="Source[1].properties[8].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[1].properties[8].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[9].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[1].properties[9].value" Type="Str">Centered</Property>
				<Property Name="Source[1].propertiesCount" Type="Int">11</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="Source[2].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[2].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[2].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[2].itemID" Type="Ref">/내 컴퓨터/subVI</Property>
				<Property Name="Source[2].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[2].type" Type="Str">Container</Property>
				<Property Name="SourceCount" Type="Int">3</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Bear Team</Property>
				<Property Name="TgtF_fileDescription" Type="Str">ATC app</Property>
				<Property Name="TgtF_internalName" Type="Str">ATC app</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">Dev lee sang woo</Property>
				<Property Name="TgtF_productName" Type="Str">ATC app</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{20DA7EF6-D442-4369-B072-D0F60717303E}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">ATC app.exe</Property>
			</Item>
			<Item Name="ATC_serial number" Type="EXE">
				<Property Name="App_copyErrors" Type="Bool">true</Property>
				<Property Name="App_INI_aliasGUID" Type="Str">{6FCF2ED3-A7DA-4AE3-B9E1-BBBB4963F9B8}</Property>
				<Property Name="App_INI_GUID" Type="Str">{85D351B7-AF69-4F1C-BB06-082F4154DE57}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{98060DBF-F24A-40B3-BC05-A6B9075D87AA}</Property>
				<Property Name="Bld_buildSpecName" Type="Str">ATC_serial number</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_excludeInlineSubVIs" Type="Bool">true</Property>
				<Property Name="Bld_excludeLibraryItems" Type="Bool">true</Property>
				<Property Name="Bld_excludePolymorphicVIs" Type="Bool">true</Property>
				<Property Name="Bld_localDestDir" Type="Path">../ATC_serial number</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_modifyLibraryFile" Type="Bool">true</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{CD85E71C-1B77-4A48-9797-524CCB7ACBD8}</Property>
				<Property Name="Bld_version.build" Type="Int">4</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">ATC_serial number.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../ATC_serial number/ATC_serial number.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">relativeToProject</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">../ATC_serial number/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">relativeToProject</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref">/내 컴퓨터/atc.ico</Property>
				<Property Name="Source[0].itemID" Type="Str">{9B6168F5-7651-4D09-BAD1-18509E51B4A4}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/ATC예문.vi</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="Source[2].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[2].itemID" Type="Ref">/내 컴퓨터/serial key 생성기.vi</Property>
				<Property Name="Source[2].properties[0].type" Type="Str">Window has title bar</Property>
				<Property Name="Source[2].properties[0].value" Type="Bool">true</Property>
				<Property Name="Source[2].properties[1].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[2].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[10].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[2].properties[10].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[11].type" Type="Str">Run when opened</Property>
				<Property Name="Source[2].properties[11].value" Type="Bool">true</Property>
				<Property Name="Source[2].properties[2].type" Type="Str">Show vertical scroll bar</Property>
				<Property Name="Source[2].properties[2].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[3].type" Type="Str">Show horizontal scroll bar</Property>
				<Property Name="Source[2].properties[3].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[4].type" Type="Str">Show toolbar</Property>
				<Property Name="Source[2].properties[4].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[5].type" Type="Str">Show Abort button</Property>
				<Property Name="Source[2].properties[5].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[6].type" Type="Str">Show fp when called</Property>
				<Property Name="Source[2].properties[6].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[7].type" Type="Str">Window behavior</Property>
				<Property Name="Source[2].properties[7].value" Type="Str">Modal</Property>
				<Property Name="Source[2].properties[8].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[2].properties[8].value" Type="Bool">true</Property>
				<Property Name="Source[2].properties[9].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[2].properties[9].value" Type="Str">Unchanged</Property>
				<Property Name="Source[2].propertiesCount" Type="Int">12</Property>
				<Property Name="Source[2].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[2].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">3</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Bear Team</Property>
				<Property Name="TgtF_fileDescription" Type="Str">ATC_serial number</Property>
				<Property Name="TgtF_internalName" Type="Str">ATC_serial number</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">Dev Lee snag woo</Property>
				<Property Name="TgtF_productName" Type="Str">ATC_serial number</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{8AB0B26E-F235-47B4-9C3D-7F08135BDB61}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">ATC_serial number.exe</Property>
			</Item>
			<Item Name="feedback" Type="EXE">
				<Property Name="App_INI_aliasGUID" Type="Str">{B7C2E261-FC1A-47FB-AB54-B769B419DEAA}</Property>
				<Property Name="App_INI_GUID" Type="Str">{8D99B469-3660-4C02-83D6-B56009825EBF}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{4C7A0A52-BA8F-41E3-AD6B-1EEDA30B0580}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">feedback</Property>
				<Property Name="Bld_buildSpecName" Type="Str">feedback</Property>
				<Property Name="Bld_compilerOptLevel" Type="Int">0</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_excludeInlineSubVIs" Type="Bool">true</Property>
				<Property Name="Bld_localDestDir" Type="Path">../feedback</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{FB7069DC-139A-4A6B-9CC2-3EEE50BE6671}</Property>
				<Property Name="Bld_version.build" Type="Int">5</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">feedback.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../feedback/feedback.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">relativeToProject</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">../feedback/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">relativeToProject</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref">/내 컴퓨터/atc.ico</Property>
				<Property Name="Source[0].itemID" Type="Str">{28FD45ED-D389-4594-A0BA-23FD12A48DC1}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/feedback.vi</Property>
				<Property Name="Source[1].properties[0].type" Type="Str">Window has title bar</Property>
				<Property Name="Source[1].properties[0].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[1].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[1].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[10].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[1].properties[10].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[2].type" Type="Str">Show vertical scroll bar</Property>
				<Property Name="Source[1].properties[2].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[3].type" Type="Str">Show horizontal scroll bar</Property>
				<Property Name="Source[1].properties[3].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[4].type" Type="Str">Show toolbar</Property>
				<Property Name="Source[1].properties[4].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[5].type" Type="Str">Show Abort button</Property>
				<Property Name="Source[1].properties[5].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[6].type" Type="Str">Show fp when called</Property>
				<Property Name="Source[1].properties[6].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[7].type" Type="Str">Window behavior</Property>
				<Property Name="Source[1].properties[7].value" Type="Str">Default</Property>
				<Property Name="Source[1].properties[8].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[1].properties[8].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[9].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[1].properties[9].value" Type="Str">Centered</Property>
				<Property Name="Source[1].propertiesCount" Type="Int">11</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">2</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Bear Team</Property>
				<Property Name="TgtF_fileDescription" Type="Str">feedback</Property>
				<Property Name="TgtF_internalName" Type="Str">feedback.exe</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">Dev lee sang woo</Property>
				<Property Name="TgtF_productName" Type="Str">feedback.exe</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{D101F57E-DF75-4C7E-A201-522C50321F2E}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">feedback.exe</Property>
			</Item>
			<Item Name="popup" Type="EXE">
				<Property Name="App_INI_aliasGUID" Type="Str">{767E9F36-E194-439D-8C33-8CEA741CD90E}</Property>
				<Property Name="App_INI_GUID" Type="Str">{484C105A-0F6C-4448-AA08-A1C2629A876F}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{4407156B-6293-4AE8-A2F6-DA6EB57D6E56}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">popup</Property>
				<Property Name="Bld_buildSpecName" Type="Str">popup</Property>
				<Property Name="Bld_compilerOptLevel" Type="Int">0</Property>
				<Property Name="Bld_localDestDir" Type="Path">../popup</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{3516E476-3B00-4849-B9FF-19DC6691CF8F}</Property>
				<Property Name="Bld_supportedLanguage[0]" Type="Str">English</Property>
				<Property Name="Bld_supportedLanguage[1]" Type="Str">Korean</Property>
				<Property Name="Bld_supportedLanguageCount" Type="Int">2</Property>
				<Property Name="Bld_version.build" Type="Int">24</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">popup.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../popup/popup.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">relativeToProject</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">../popup/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">relativeToProject</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref">/내 컴퓨터/atc.ico</Property>
				<Property Name="Source[0].itemID" Type="Str">{28FD45ED-D389-4594-A0BA-23FD12A48DC1}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/popup.vi</Property>
				<Property Name="Source[1].properties[0].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[1].properties[0].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[1].type" Type="Str">Show vertical scroll bar</Property>
				<Property Name="Source[1].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[10].type" Type="Str">Run when opened</Property>
				<Property Name="Source[1].properties[10].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[11].type" Type="Str">Remove front panel</Property>
				<Property Name="Source[1].properties[11].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[12].type" Type="Str">Remove block diagram</Property>
				<Property Name="Source[1].properties[12].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[13].type" Type="Str">Window has title bar</Property>
				<Property Name="Source[1].properties[13].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[2].type" Type="Str">Show horizontal scroll bar</Property>
				<Property Name="Source[1].properties[2].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[3].type" Type="Str">Show toolbar</Property>
				<Property Name="Source[1].properties[3].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[4].type" Type="Str">Show Abort button</Property>
				<Property Name="Source[1].properties[4].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[5].type" Type="Str">Show fp when called</Property>
				<Property Name="Source[1].properties[5].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[6].type" Type="Str">Window behavior</Property>
				<Property Name="Source[1].properties[6].value" Type="Str">Default</Property>
				<Property Name="Source[1].properties[7].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[1].properties[7].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[8].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[1].properties[8].value" Type="Str">Centered</Property>
				<Property Name="Source[1].properties[9].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[1].properties[9].value" Type="Bool">false</Property>
				<Property Name="Source[1].propertiesCount" Type="Int">14</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">2</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Bear Team</Property>
				<Property Name="TgtF_fileDescription" Type="Str">popup</Property>
				<Property Name="TgtF_internalName" Type="Str">popup</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">Dev lee sang woo</Property>
				<Property Name="TgtF_productName" Type="Str">popup</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{B29E840C-4054-4EFF-9179-4831702D6188}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">popup.exe</Property>
			</Item>
			<Item Name="serial del" Type="EXE">
				<Property Name="App_INI_aliasGUID" Type="Str">{D37AB374-FE92-4EBB-9F1C-648A891054DD}</Property>
				<Property Name="App_INI_GUID" Type="Str">{2A0E0E5D-3210-483E-A1B0-0FB0C6C87CA3}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{502B55D4-D790-43F5-A5A5-409D0DE1793C}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">serial del</Property>
				<Property Name="Bld_buildSpecName" Type="Str">serial del</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_localDestDir" Type="Path">../serial del</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{BA3C0C48-F1A3-40BD-AD4C-C2C25F4F13E4}</Property>
				<Property Name="Bld_supportedLanguage[0]" Type="Str">Korean</Property>
				<Property Name="Bld_supportedLanguageCount" Type="Int">1</Property>
				<Property Name="Bld_version.build" Type="Int">15</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">serial del.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../serial del/serial del.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">relativeToProject</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">../serial del/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">relativeToProject</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref">/내 컴퓨터/atc.ico</Property>
				<Property Name="Source[0].itemID" Type="Str">{9B6168F5-7651-4D09-BAD1-18509E51B4A4}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].Container.applyDestination" Type="Bool">true</Property>
				<Property Name="Source[1].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[1].Container.applyProperties" Type="Bool">true</Property>
				<Property Name="Source[1].Container.applySaveSettings" Type="Bool">true</Property>
				<Property Name="Source[1].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/subVI</Property>
				<Property Name="Source[1].properties[0].type" Type="Str">Remove front panel</Property>
				<Property Name="Source[1].properties[0].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[1].type" Type="Str">Remove block diagram</Property>
				<Property Name="Source[1].properties[1].value" Type="Bool">true</Property>
				<Property Name="Source[1].propertiesCount" Type="Int">2</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[1].type" Type="Str">Container</Property>
				<Property Name="Source[2].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[2].itemID" Type="Ref">/내 컴퓨터/serial del.vi</Property>
				<Property Name="Source[2].properties[0].type" Type="Str">Window has title bar</Property>
				<Property Name="Source[2].properties[0].value" Type="Bool">true</Property>
				<Property Name="Source[2].properties[1].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[2].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[10].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[2].properties[10].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[11].type" Type="Str">Remove front panel</Property>
				<Property Name="Source[2].properties[11].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[12].type" Type="Str">Remove block diagram</Property>
				<Property Name="Source[2].properties[12].value" Type="Bool">true</Property>
				<Property Name="Source[2].properties[2].type" Type="Str">Show vertical scroll bar</Property>
				<Property Name="Source[2].properties[2].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[3].type" Type="Str">Show horizontal scroll bar</Property>
				<Property Name="Source[2].properties[3].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[4].type" Type="Str">Show toolbar</Property>
				<Property Name="Source[2].properties[4].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[5].type" Type="Str">Show fp when called</Property>
				<Property Name="Source[2].properties[5].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[6].type" Type="Str">Show Abort button</Property>
				<Property Name="Source[2].properties[6].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[7].type" Type="Str">Window behavior</Property>
				<Property Name="Source[2].properties[7].value" Type="Str">Floating</Property>
				<Property Name="Source[2].properties[8].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[2].properties[8].value" Type="Bool">true</Property>
				<Property Name="Source[2].properties[9].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[2].properties[9].value" Type="Str">Centered</Property>
				<Property Name="Source[2].propertiesCount" Type="Int">13</Property>
				<Property Name="Source[2].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[2].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">3</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Bear Team</Property>
				<Property Name="TgtF_fileDescription" Type="Str">serial del</Property>
				<Property Name="TgtF_internalName" Type="Str">serial del</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">dev by lee sang woo</Property>
				<Property Name="TgtF_productName" Type="Str">serial del</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{442B7701-D6CF-4BC4-A895-D4C5BA961447}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">serial del.exe</Property>
			</Item>
			<Item Name="Sound Player" Type="EXE">
				<Property Name="App_INI_aliasGUID" Type="Str">{86E187BC-EF80-4455-895F-0EB017D9758C}</Property>
				<Property Name="App_INI_GUID" Type="Str">{5259AFA8-F22E-405A-9E89-EB231EDDEA18}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{7C991224-ABE0-4BB2-903B-3147DB6B74A9}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">Sound Player.exe</Property>
				<Property Name="Bld_buildSpecName" Type="Str">Sound Player</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_excludeInlineSubVIs" Type="Bool">true</Property>
				<Property Name="Bld_excludeLibraryItems" Type="Bool">true</Property>
				<Property Name="Bld_excludePolymorphicVIs" Type="Bool">true</Property>
				<Property Name="Bld_localDestDir" Type="Path">/C/Users/lsw/Desktop/새 폴더 (3)</Property>
				<Property Name="Bld_modifyLibraryFile" Type="Bool">true</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{8FA67FB7-853A-4087-8048-31F56B30FD3E}</Property>
				<Property Name="Bld_version.build" Type="Int">1</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">Sound Player.exe</Property>
				<Property Name="Destination[0].path" Type="Path">/C/Users/lsw/Desktop/새 폴더 (3)/Sound Player.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">&lt;none&gt;</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">/C/Users/lsw/Desktop/새 폴더 (3)/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">&lt;none&gt;</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Source[0].itemID" Type="Str">{D95C0718-987A-4E41-9C75-39B642797B3A}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/사운드.vi</Property>
				<Property Name="Source[1].properties[0].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[1].properties[0].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[1].type" Type="Str">Show vertical scroll bar</Property>
				<Property Name="Source[1].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[2].type" Type="Str">Show horizontal scroll bar</Property>
				<Property Name="Source[1].properties[2].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[3].type" Type="Str">Show toolbar</Property>
				<Property Name="Source[1].properties[3].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[4].type" Type="Str">Show Abort button</Property>
				<Property Name="Source[1].properties[4].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[5].type" Type="Str">Show fp when called</Property>
				<Property Name="Source[1].properties[5].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[6].type" Type="Str">Window behavior</Property>
				<Property Name="Source[1].properties[6].value" Type="Str">Default</Property>
				<Property Name="Source[1].properties[7].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[1].properties[7].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[8].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[1].properties[8].value" Type="Str">Unchanged</Property>
				<Property Name="Source[1].properties[9].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[1].properties[9].value" Type="Bool">true</Property>
				<Property Name="Source[1].propertiesCount" Type="Int">10</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">2</Property>
				<Property Name="TgtF_fileDescription" Type="Str">Sound Player</Property>
				<Property Name="TgtF_internalName" Type="Str">Sound Player</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">저작권 2017 </Property>
				<Property Name="TgtF_productName" Type="Str">Sound Player</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{A283320F-3006-4F05-BC1A-D8ACBB8CFDDB}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">Sound Player.exe</Property>
			</Item>
			<Item Name="update setup complete" Type="EXE">
				<Property Name="App_INI_aliasGUID" Type="Str">{EE287A20-C858-4F43-8A6E-1FD4DA8F7E50}</Property>
				<Property Name="App_INI_GUID" Type="Str">{3F1F7B24-9957-429E-AF7B-73DDB16EB842}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{DAB4F8C6-3EC3-4BF3-9B10-482935C3E0D8}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">update setup complete</Property>
				<Property Name="Bld_buildSpecName" Type="Str">update setup complete</Property>
				<Property Name="Bld_compilerOptLevel" Type="Int">0</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_localDestDir" Type="Path">../update setup complete</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{CCC05D4C-C635-49D2-888A-CC6A40F88C29}</Property>
				<Property Name="Bld_supportedLanguage[0]" Type="Str">English</Property>
				<Property Name="Bld_supportedLanguage[1]" Type="Str">Korean</Property>
				<Property Name="Bld_supportedLanguageCount" Type="Int">2</Property>
				<Property Name="Bld_version.build" Type="Int">7</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Bld_version.patch" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">update setup complete.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../update setup complete/update setup complete.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">relativeToProject</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">../update setup complete/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">relativeToProject</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref">/내 컴퓨터/atc.ico</Property>
				<Property Name="Source[0].itemID" Type="Str">{9B6168F5-7651-4D09-BAD1-18509E51B4A4}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/update setup complete.vi</Property>
				<Property Name="Source[1].properties[0].type" Type="Str">Window has title bar</Property>
				<Property Name="Source[1].properties[0].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[1].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[1].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[10].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[1].properties[10].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[2].type" Type="Str">Show vertical scroll bar</Property>
				<Property Name="Source[1].properties[2].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[3].type" Type="Str">Show horizontal scroll bar</Property>
				<Property Name="Source[1].properties[3].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[4].type" Type="Str">Show toolbar</Property>
				<Property Name="Source[1].properties[4].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[5].type" Type="Str">Show Abort button</Property>
				<Property Name="Source[1].properties[5].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[6].type" Type="Str">Show fp when called</Property>
				<Property Name="Source[1].properties[6].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[7].type" Type="Str">Window behavior</Property>
				<Property Name="Source[1].properties[7].value" Type="Str">Default</Property>
				<Property Name="Source[1].properties[8].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[1].properties[8].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[9].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[1].properties[9].value" Type="Str">Centered</Property>
				<Property Name="Source[1].propertiesCount" Type="Int">11</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">2</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Bear Team</Property>
				<Property Name="TgtF_fileDescription" Type="Str">update setup complete</Property>
				<Property Name="TgtF_internalName" Type="Str">update setup complete</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">dev by lee snag woo</Property>
				<Property Name="TgtF_productName" Type="Str">update setup complete</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{7D396963-D8CE-49D6-94AB-827682B220F5}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">update setup complete.exe</Property>
			</Item>
		</Item>
	</Item>
</Project>
