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
		<Item Name="의존성" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
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
				<Item Name="Search and Replace Pattern.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Search and Replace Pattern.vi"/>
				<Item Name="Set Bold Text.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set Bold Text.vi"/>
				<Item Name="Set String Value.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set String Value.vi"/>
				<Item Name="Simple Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Simple Error Handler.vi"/>
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
		</Item>
		<Item Name="빌드 스펙" Type="Build">
			<Item Name="(start)ATC app setup" Type="Installer">
				<Property Name="Destination[0].name" Type="Str">ATC app</Property>
				<Property Name="Destination[0].parent" Type="Str">{3912416A-D2E5-411B-AFEE-B63654D690C0}</Property>
				<Property Name="Destination[0].tag" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Destination[0].type" Type="Str">userFolder</Property>
				<Property Name="DestinationCount" Type="Int">1</Property>
				<Property Name="DistPart[0].flavorID" Type="Str">DefaultFull</Property>
				<Property Name="DistPart[0].productID" Type="Str">{BC63CBA0-ED82-4217-B980-0C62C74D04DC}</Property>
				<Property Name="DistPart[0].productName" Type="Str">NI LabVIEW 런타임 2014 SP1 f7</Property>
				<Property Name="DistPart[0].SoftDep[0].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[0].SoftDep[0].productName" Type="Str">NI LabVIEW 런타임 2014 SP1 영어 외 다른 언어 지원.</Property>
				<Property Name="DistPart[0].SoftDep[0].upgradeCode" Type="Str">{CAC8FA79-6D3D-4263-BB7B-1A706EF87C08}</Property>
				<Property Name="DistPart[0].SoftDep[1].exclude" Type="Bool">true</Property>
				<Property Name="DistPart[0].SoftDep[1].productName" Type="Str">NI ActiveX 컨테이너</Property>
				<Property Name="DistPart[0].SoftDep[1].upgradeCode" Type="Str">{1038A887-23E1-4289-B0BD-0C4B83C6BA21}</Property>
				<Property Name="DistPart[0].SoftDep[10].exclude" Type="Bool">true</Property>
				<Property Name="DistPart[0].SoftDep[10].productName" Type="Str">NI VC2010MSMs</Property>
				<Property Name="DistPart[0].SoftDep[10].upgradeCode" Type="Str">{EFBA6F9E-F934-4BD7-AC51-60CCA480489C}</Property>
				<Property Name="DistPart[0].SoftDep[11].exclude" Type="Bool">true</Property>
				<Property Name="DistPart[0].SoftDep[11].productName" Type="Str">NI mDNS Responder 14.0</Property>
				<Property Name="DistPart[0].SoftDep[11].upgradeCode" Type="Str">{9607874B-4BB3-42CB-B450-A2F5EF60BA3B}</Property>
				<Property Name="DistPart[0].SoftDep[12].exclude" Type="Bool">true</Property>
				<Property Name="DistPart[0].SoftDep[12].productName" Type="Str">NI 배포 프레임워크 2014</Property>
				<Property Name="DistPart[0].SoftDep[12].upgradeCode" Type="Str">{838942E4-B73C-492E-81A3-AA1E291FD0DC}</Property>
				<Property Name="DistPart[0].SoftDep[13].exclude" Type="Bool">true</Property>
				<Property Name="DistPart[0].SoftDep[13].productName" Type="Str">NI 에러 리포트 2014</Property>
				<Property Name="DistPart[0].SoftDep[13].upgradeCode" Type="Str">{42E818C6-2B08-4DE7-BD91-B0FD704C119A}</Property>
				<Property Name="DistPart[0].SoftDep[2].exclude" Type="Bool">true</Property>
				<Property Name="DistPart[0].SoftDep[2].productName" Type="Str">NI Service Locator 14.0</Property>
				<Property Name="DistPart[0].SoftDep[2].upgradeCode" Type="Str">{B235B862-6A92-4A04-A8B2-6D71F777DE67}</Property>
				<Property Name="DistPart[0].SoftDep[3].exclude" Type="Bool">true</Property>
				<Property Name="DistPart[0].SoftDep[3].productName" Type="Str">NI System Web Server 14.5</Property>
				<Property Name="DistPart[0].SoftDep[3].upgradeCode" Type="Str">{FCF64B73-B7D4-4971-8F11-24BAF7CC3E6C}</Property>
				<Property Name="DistPart[0].SoftDep[4].exclude" Type="Bool">true</Property>
				<Property Name="DistPart[0].SoftDep[4].productName" Type="Str">Math Kernel 라이브러리</Property>
				<Property Name="DistPart[0].SoftDep[4].upgradeCode" Type="Str">{3BDD0408-2F90-4B42-9777-5ED1D4BE67A8}</Property>
				<Property Name="DistPart[0].SoftDep[5].exclude" Type="Bool">true</Property>
				<Property Name="DistPart[0].SoftDep[5].productName" Type="Str">NI Logos 14.0</Property>
				<Property Name="DistPart[0].SoftDep[5].upgradeCode" Type="Str">{5E4A4CE3-4D06-11D4-8B22-006008C16337}</Property>
				<Property Name="DistPart[0].SoftDep[6].exclude" Type="Bool">true</Property>
				<Property Name="DistPart[0].SoftDep[6].productName" Type="Str">NI TDM Streaming 14.0</Property>
				<Property Name="DistPart[0].SoftDep[6].upgradeCode" Type="Str">{4CD11BE6-6BB7-4082-8A27-C13771BC309B}</Property>
				<Property Name="DistPart[0].SoftDep[7].exclude" Type="Bool">true</Property>
				<Property Name="DistPart[0].SoftDep[7].productName" Type="Str">NI LabVIEW 웹 서버 2014</Property>
				<Property Name="DistPart[0].SoftDep[7].upgradeCode" Type="Str">{4A8BDBBB-DA1C-45C9-8563-74C034FBD357}</Property>
				<Property Name="DistPart[0].SoftDep[8].exclude" Type="Bool">true</Property>
				<Property Name="DistPart[0].SoftDep[8].productName" Type="Str">NI LabVIEW Real-Time NBFifo 2014</Property>
				<Property Name="DistPart[0].SoftDep[8].upgradeCode" Type="Str">{4372F3E3-5935-4012-93AB-B6710CE24920}</Property>
				<Property Name="DistPart[0].SoftDep[9].exclude" Type="Bool">false</Property>
				<Property Name="DistPart[0].SoftDep[9].productName" Type="Str">NI VC2008MSMs</Property>
				<Property Name="DistPart[0].SoftDep[9].upgradeCode" Type="Str">{FDA3F8BB-BAA9-45D7-8DC7-22E1F5C76315}</Property>
				<Property Name="DistPart[0].SoftDepCount" Type="Int">14</Property>
				<Property Name="DistPart[0].upgradeCode" Type="Str">{4722F14B-8434-468D-840D-2B0CD8CBD5EA}</Property>
				<Property Name="DistPartCount" Type="Int">1</Property>
				<Property Name="INST_autoIncrement" Type="Bool">true</Property>
				<Property Name="INST_buildLocation" Type="Path">../ATC app/(start)ATC app setup/ATC app</Property>
				<Property Name="INST_buildLocation.type" Type="Str">relativeToCommon</Property>
				<Property Name="INST_buildSpecName" Type="Str">(start)ATC app setup</Property>
				<Property Name="INST_defaultDir" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="INST_includeError" Type="Bool">false</Property>
				<Property Name="INST_language" Type="Int">18</Property>
				<Property Name="INST_productName" Type="Str">ATC app</Property>
				<Property Name="INST_productVersion" Type="Str">3.0.3</Property>
				<Property Name="INST_readmeID" Type="Ref">/내 컴퓨터/explanation.rtf</Property>
				<Property Name="InstSpecBitness" Type="Str">32-bit</Property>
				<Property Name="InstSpecVersion" Type="Str">14008036</Property>
				<Property Name="MSI_arpCompany" Type="Str">Polor Bear Team</Property>
				<Property Name="MSI_arpContact" Type="Str">tkddn4508@naver.com</Property>
				<Property Name="MSI_arpPhone" Type="Str">tkddn4508@naver.com</Property>
				<Property Name="MSI_bannerImageID" Type="Ref">/내 컴퓨터/atc.bmp</Property>
				<Property Name="MSI_distID" Type="Str">{5066DE69-9314-4606-A2F0-8C5D71AF67B0}</Property>
				<Property Name="MSI_licenseID" Type="Ref">/내 컴퓨터/ATC.rtf</Property>
				<Property Name="MSI_osCheck" Type="Int">0</Property>
				<Property Name="MSI_upgradeCode" Type="Str">{ED3BE299-240F-498E-8B5A-B93BC07C8AD8}</Property>
				<Property Name="MSI_welcomeImageID" Type="Ref">/내 컴퓨터/atc.bmp</Property>
				<Property Name="MSI_windowMessage" Type="Str">ATC app  를 사용해 주셔 감사합니다. 

dev by lee sang woo </Property>
				<Property Name="MSI_windowTitle" Type="Str">ATC app</Property>
				<Property Name="RegDest[0].dirName" Type="Str">Software</Property>
				<Property Name="RegDest[0].dirTag" Type="Str">{DDFAFC8B-E728-4AC8-96DE-B920EBB97A86}</Property>
				<Property Name="RegDest[0].parentTag" Type="Str">2</Property>
				<Property Name="RegDestCount" Type="Int">1</Property>
				<Property Name="Source[0].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[0].File[0].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[0].File[0].name" Type="Str">ATC app.exe</Property>
				<Property Name="Source[0].File[0].Shortcut[0].destIndex" Type="Int">0</Property>
				<Property Name="Source[0].File[0].Shortcut[0].name" Type="Str">ATC app</Property>
				<Property Name="Source[0].File[0].Shortcut[0].subDir" Type="Str"></Property>
				<Property Name="Source[0].File[0].Shortcut[1].destIndex" Type="Int">1</Property>
				<Property Name="Source[0].File[0].Shortcut[1].name" Type="Str">ATC app</Property>
				<Property Name="Source[0].File[0].Shortcut[1].subDir" Type="Str"></Property>
				<Property Name="Source[0].File[0].Shortcut[2].destIndex" Type="Int">2</Property>
				<Property Name="Source[0].File[0].Shortcut[2].name" Type="Str">ATC app</Property>
				<Property Name="Source[0].File[0].Shortcut[2].subDir" Type="Str"></Property>
				<Property Name="Source[0].File[0].ShortcutCount" Type="Int">3</Property>
				<Property Name="Source[0].File[0].tag" Type="Str">{9410230A-81A5-4290-9D90-4ABD82A54317}</Property>
				<Property Name="Source[0].File[1].attributes" Type="Int">519</Property>
				<Property Name="Source[0].File[1].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[0].File[1].name" Type="Str">ATC app.aliases</Property>
				<Property Name="Source[0].File[1].tag" Type="Str">{3D90DA73-3DF1-4D6E-82FD-A0D2121BD4EC}</Property>
				<Property Name="Source[0].File[2].attributes" Type="Int">519</Property>
				<Property Name="Source[0].File[2].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[0].File[2].name" Type="Str">ATC app.ini</Property>
				<Property Name="Source[0].File[2].tag" Type="Str">{03B3DE46-1500-4977-9FE6-CED97317F4AA}</Property>
				<Property Name="Source[0].File[3].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[0].File[3].name" Type="Str">niwebserver.conf</Property>
				<Property Name="Source[0].File[3].tag" Type="Str">{388EB2E0-D632-411F-A672-E1E363EC137E}</Property>
				<Property Name="Source[0].FileCount" Type="Int">3</Property>
				<Property Name="Source[0].name" Type="Str">ATC app</Property>
				<Property Name="Source[0].tag" Type="Ref">/내 컴퓨터/빌드 스펙/ATC app</Property>
				<Property Name="Source[0].type" Type="Str">EXE</Property>
				<Property Name="Source[1].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[1].File[0].attributes" Type="Int">519</Property>
				<Property Name="Source[1].File[0].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[1].File[0].name" Type="Str">serial del.exe</Property>
				<Property Name="Source[1].File[0].runEXE_uninstall" Type="Bool">true</Property>
				<Property Name="Source[1].File[0].tag" Type="Str">{442B7701-D6CF-4BC4-A895-D4C5BA961447}</Property>
				<Property Name="Source[1].File[1].attributes" Type="Int">519</Property>
				<Property Name="Source[1].File[1].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[1].File[1].name" Type="Str">serial del.aliases</Property>
				<Property Name="Source[1].File[1].tag" Type="Str">{D37AB374-FE92-4EBB-9F1C-648A891054DD}</Property>
				<Property Name="Source[1].File[2].attributes" Type="Int">519</Property>
				<Property Name="Source[1].File[2].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[1].File[2].name" Type="Str">serial del.ini</Property>
				<Property Name="Source[1].File[2].tag" Type="Str">{2A0E0E5D-3210-483E-A1B0-0FB0C6C87CA3}</Property>
				<Property Name="Source[1].File[3].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[1].File[3].name" Type="Str">niwebserver.conf</Property>
				<Property Name="Source[1].File[3].tag" Type="Str">{40EF665E-493C-42AE-899B-84BE0E745F12}</Property>
				<Property Name="Source[1].FileCount" Type="Int">3</Property>
				<Property Name="Source[1].name" Type="Str">serial del</Property>
				<Property Name="Source[1].tag" Type="Ref">/내 컴퓨터/빌드 스펙/serial del</Property>
				<Property Name="Source[1].type" Type="Str">EXE</Property>
				<Property Name="Source[2].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[2].File[0].attributes" Type="Int">519</Property>
				<Property Name="Source[2].File[0].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[2].File[0].name" Type="Str">setup complete.exe</Property>
				<Property Name="Source[2].File[0].runEXE" Type="Bool">true</Property>
				<Property Name="Source[2].File[0].tag" Type="Str">{CB84E0CF-915D-47B4-B947-99988C063AEA}</Property>
				<Property Name="Source[2].File[1].attributes" Type="Int">519</Property>
				<Property Name="Source[2].File[1].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[2].File[1].name" Type="Str">setup complete.aliases</Property>
				<Property Name="Source[2].File[1].tag" Type="Str">{01388F72-56A7-4C40-AF38-94EF7F8B6E40}</Property>
				<Property Name="Source[2].File[2].attributes" Type="Int">519</Property>
				<Property Name="Source[2].File[2].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[2].File[2].name" Type="Str">setup complete.ini</Property>
				<Property Name="Source[2].File[2].tag" Type="Str">{318CCEEE-6E0F-4BB9-BF2C-10702B97C706}</Property>
				<Property Name="Source[2].File[3].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[2].File[3].name" Type="Str">niwebserver.conf</Property>
				<Property Name="Source[2].File[3].tag" Type="Str">{F46DD05E-83DA-4200-92D8-33F60F7C3503}</Property>
				<Property Name="Source[2].FileCount" Type="Int">3</Property>
				<Property Name="Source[2].name" Type="Str">setup complete</Property>
				<Property Name="Source[2].tag" Type="Ref">/내 컴퓨터/빌드 스펙/setup complete</Property>
				<Property Name="Source[2].type" Type="Str">EXE</Property>
				<Property Name="Source[3].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[3].File[0].attributes" Type="Int">519</Property>
				<Property Name="Source[3].File[0].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[3].File[0].name" Type="Str">feedback.exe</Property>
				<Property Name="Source[3].File[0].tag" Type="Str">{0F2C99D5-366F-491B-B0D3-C16398133309}</Property>
				<Property Name="Source[3].File[1].attributes" Type="Int">519</Property>
				<Property Name="Source[3].File[1].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[3].File[1].name" Type="Str">feedback.aliases</Property>
				<Property Name="Source[3].File[1].tag" Type="Str">{3310259F-9E8B-4FF7-A874-E607BA946820}</Property>
				<Property Name="Source[3].File[2].attributes" Type="Int">519</Property>
				<Property Name="Source[3].File[2].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[3].File[2].name" Type="Str">feedback.ini</Property>
				<Property Name="Source[3].File[2].tag" Type="Str">{4C1C685E-06D2-46D7-A577-66E3207C420A}</Property>
				<Property Name="Source[3].File[3].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[3].File[3].name" Type="Str">niwebserver.conf</Property>
				<Property Name="Source[3].File[3].tag" Type="Str">{781409C5-3AD7-433D-A19B-4FD46ADC2BB9}</Property>
				<Property Name="Source[3].FileCount" Type="Int">3</Property>
				<Property Name="Source[3].name" Type="Str">feedback</Property>
				<Property Name="Source[3].tag" Type="Ref">/내 컴퓨터/빌드 스펙/feedback</Property>
				<Property Name="Source[3].type" Type="Str">EXE</Property>
				<Property Name="Source[4].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[4].File[0].attributes" Type="Int">519</Property>
				<Property Name="Source[4].File[0].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[4].File[0].name" Type="Str">popup.exe</Property>
				<Property Name="Source[4].File[0].tag" Type="Str">{D1AB2B3A-E8C6-4FDC-B0D7-45CCC86178C4}</Property>
				<Property Name="Source[4].File[1].attributes" Type="Int">519</Property>
				<Property Name="Source[4].File[1].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[4].File[1].name" Type="Str">popup.aliases</Property>
				<Property Name="Source[4].File[1].tag" Type="Str">{D2E42A05-2202-42FC-BFE5-C762F53899C8}</Property>
				<Property Name="Source[4].File[2].attributes" Type="Int">519</Property>
				<Property Name="Source[4].File[2].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[4].File[2].name" Type="Str">popup.ini</Property>
				<Property Name="Source[4].File[2].tag" Type="Str">{0B554A4D-C852-492A-B931-4A8F1205A852}</Property>
				<Property Name="Source[4].File[3].dest" Type="Str">{5D00B9B6-9275-470A-8217-768438BBAACB}</Property>
				<Property Name="Source[4].File[3].name" Type="Str">niwebserver.conf</Property>
				<Property Name="Source[4].File[3].tag" Type="Str">{9B6474C6-EBAA-4ACB-BA0F-C58C45696F04}</Property>
				<Property Name="Source[4].FileCount" Type="Int">3</Property>
				<Property Name="Source[4].name" Type="Str">popup</Property>
				<Property Name="Source[4].tag" Type="Ref">/내 컴퓨터/빌드 스펙/popup</Property>
				<Property Name="Source[4].type" Type="Str">EXE</Property>
				<Property Name="Source[5].dest" Type="Str">{624309A2-B0CB-4149-B964-A0FF8B968B6A}</Property>
				<Property Name="Source[5].name" Type="Str">ATC app output.txt</Property>
				<Property Name="Source[5].tag" Type="Ref">/내 컴퓨터/ATC app output.txt</Property>
				<Property Name="Source[5].type" Type="Str">File</Property>
				<Property Name="Source[6].attributes" Type="Int">516</Property>
				<Property Name="Source[6].dest" Type="Str">{115F5F59-DED6-42E2-8467-4CD042208C47}</Property>
				<Property Name="Source[6].name" Type="Str">lisence key.pbfs</Property>
				<Property Name="Source[6].tag" Type="Ref">/내 컴퓨터/lisence key.pbfs</Property>
				<Property Name="Source[6].type" Type="Str">File</Property>
				<Property Name="Source[7].attributes" Type="Int">516</Property>
				<Property Name="Source[7].dest" Type="Str">{115F5F59-DED6-42E2-8467-4CD042208C47}</Property>
				<Property Name="Source[7].name" Type="Str">serial key.pbfs</Property>
				<Property Name="Source[7].tag" Type="Ref">/내 컴퓨터/serial key.pbfs</Property>
				<Property Name="Source[7].type" Type="Str">File</Property>
				<Property Name="SourceCount" Type="Int">8</Property>
			</Item>
			<Item Name="ATC app" Type="EXE">
				<Property Name="App_INI_aliasGUID" Type="Str">{3D90DA73-3DF1-4D6E-82FD-A0D2121BD4EC}</Property>
				<Property Name="App_INI_GUID" Type="Str">{03B3DE46-1500-4977-9FE6-CED97317F4AA}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{65818504-0311-488F-9C61-FABD78ED698D}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">ATC app </Property>
				<Property Name="Bld_buildSpecName" Type="Str">ATC app</Property>
				<Property Name="Bld_compilerOptLevel" Type="Int">0</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_localDestDir" Type="Path">../atcapp</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{CB47FEFE-186C-4CF4-B566-1434D5A8E6C9}</Property>
				<Property Name="Bld_supportedLanguage[0]" Type="Str">English</Property>
				<Property Name="Bld_supportedLanguage[1]" Type="Str">Korean</Property>
				<Property Name="Bld_supportedLanguageCount" Type="Int">2</Property>
				<Property Name="Bld_version.build" Type="Int">55</Property>
				<Property Name="Bld_version.major" Type="Int">3</Property>
				<Property Name="Destination[0].destName" Type="Str">ATC app.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../atcapp/NI_AB_PROJECTNAME.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">relativeToProject</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">../atcapp/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">relativeToProject</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref">/내 컴퓨터/atc.ico</Property>
				<Property Name="Source[0].itemID" Type="Str">{E6E3847A-6E55-4B37-84B3-A3B14839B113}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/ATC예문.vi</Property>
				<Property Name="Source[1].properties[0].type" Type="Str">Window has title bar</Property>
				<Property Name="Source[1].properties[0].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[1].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[1].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[10].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[1].properties[10].value" Type="Str">Centered</Property>
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
				<Property Name="Source[1].properties[7].value" Type="Str">Floating</Property>
				<Property Name="Source[1].properties[8].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[1].properties[8].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[9].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[1].properties[9].value" Type="Bool">false</Property>
				<Property Name="Source[1].propertiesCount" Type="Int">11</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="Source[2].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[2].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[2].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[2].itemID" Type="Ref">/내 컴퓨터/subVI</Property>
				<Property Name="Source[2].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[2].type" Type="Str">Container</Property>
				<Property Name="Source[3].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[3].itemID" Type="Ref">/내 컴퓨터/serial del.vi</Property>
				<Property Name="Source[3].properties[0].type" Type="Str">Remove front panel</Property>
				<Property Name="Source[3].properties[0].value" Type="Bool">true</Property>
				<Property Name="Source[3].properties[1].type" Type="Str">Remove block diagram</Property>
				<Property Name="Source[3].properties[1].value" Type="Bool">true</Property>
				<Property Name="Source[3].propertiesCount" Type="Int">2</Property>
				<Property Name="Source[3].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">4</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Bear Team</Property>
				<Property Name="TgtF_fileDescription" Type="Str">ATC app</Property>
				<Property Name="TgtF_internalName" Type="Str">ATC app</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">Dev by lee sang woo</Property>
				<Property Name="TgtF_productName" Type="Str">ATC app</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{9410230A-81A5-4290-9D90-4ABD82A54317}</Property>
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
				<Property Name="Bld_version.build" Type="Int">3</Property>
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
				<Property Name="Source[0].itemID" Type="Str">{6C8CCE3A-42B7-4394-9CED-0E2CA9ADC24C}</Property>
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
				<Property Name="App_INI_aliasGUID" Type="Str">{3310259F-9E8B-4FF7-A874-E607BA946820}</Property>
				<Property Name="App_INI_GUID" Type="Str">{4C1C685E-06D2-46D7-A577-66E3207C420A}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{65BC0461-42E5-4353-A3CE-7EC616E8BE4C}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">feedback</Property>
				<Property Name="Bld_buildSpecName" Type="Str">feedback</Property>
				<Property Name="Bld_compilerOptLevel" Type="Int">0</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_localDestDir" Type="Path">../feedback</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{68E51F57-F51E-454F-8DFC-D3167FAC81D1}</Property>
				<Property Name="Bld_version.build" Type="Int">2</Property>
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
				<Property Name="Source[0].itemID" Type="Str">{E6E3847A-6E55-4B37-84B3-A3B14839B113}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/feedback.vi</Property>
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
				<Property Name="Source[1].properties[8].value" Type="Str">Centered</Property>
				<Property Name="Source[1].properties[9].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[1].properties[9].value" Type="Bool">false</Property>
				<Property Name="Source[1].propertiesCount" Type="Int">10</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">2</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Bear Team</Property>
				<Property Name="TgtF_fileDescription" Type="Str">feedback</Property>
				<Property Name="TgtF_internalName" Type="Str">feedback</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">Dev Lee Sang Woo</Property>
				<Property Name="TgtF_productName" Type="Str">feedback</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{0F2C99D5-366F-491B-B0D3-C16398133309}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">feedback.exe</Property>
			</Item>
			<Item Name="popup" Type="EXE">
				<Property Name="App_INI_aliasGUID" Type="Str">{D2E42A05-2202-42FC-BFE5-C762F53899C8}</Property>
				<Property Name="App_INI_GUID" Type="Str">{0B554A4D-C852-492A-B931-4A8F1205A852}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{09ED7D1F-1317-40A4-B700-D98928F663E4}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">popup</Property>
				<Property Name="Bld_buildSpecName" Type="Str">popup</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_localDestDir" Type="Path">../popup</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{11D942C4-B26B-4440-AB40-84A50371ADE8}</Property>
				<Property Name="Bld_supportedLanguage[0]" Type="Str">English</Property>
				<Property Name="Bld_supportedLanguage[1]" Type="Str">Korean</Property>
				<Property Name="Bld_supportedLanguageCount" Type="Int">2</Property>
				<Property Name="Bld_version.build" Type="Int">2</Property>
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
				<Property Name="Source[0].itemID" Type="Str">{E6E3847A-6E55-4B37-84B3-A3B14839B113}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/popup.vi</Property>
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
				<Property Name="Source[1].properties[7].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[8].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[1].properties[8].value" Type="Str">Centered</Property>
				<Property Name="Source[1].properties[9].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[1].properties[9].value" Type="Bool">false</Property>
				<Property Name="Source[1].propertiesCount" Type="Int">10</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">2</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Beam Team</Property>
				<Property Name="TgtF_fileDescription" Type="Str">popup</Property>
				<Property Name="TgtF_internalName" Type="Str">popup</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">Dev Lee Sang Woo</Property>
				<Property Name="TgtF_productName" Type="Str">popup</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{D1AB2B3A-E8C6-4FDC-B0D7-45CCC86178C4}</Property>
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
				<Property Name="Bld_version.build" Type="Int">13</Property>
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
				<Property Name="Source[0].itemID" Type="Str">{02F98F9E-6844-40A7-BB40-C6B32859AC07}</Property>
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
			<Item Name="setup complete" Type="EXE">
				<Property Name="App_INI_aliasGUID" Type="Str">{01388F72-56A7-4C40-AF38-94EF7F8B6E40}</Property>
				<Property Name="App_INI_GUID" Type="Str">{318CCEEE-6E0F-4BB9-BF2C-10702B97C706}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{F450C1E3-7AAD-4E1B-B265-DB547E68B257}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">setup complete</Property>
				<Property Name="Bld_buildSpecName" Type="Str">setup complete</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_localDestDir" Type="Path">../setup complete</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{395E53D0-3EC1-4A54-8BA5-DD15F04169E0}</Property>
				<Property Name="Bld_supportedLanguage[0]" Type="Str">Korean</Property>
				<Property Name="Bld_supportedLanguageCount" Type="Int">1</Property>
				<Property Name="Bld_version.build" Type="Int">12</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Bld_version.patch" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">setup complete.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../setup complete/setup complete.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">relativeToProject</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">../setup complete/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">relativeToProject</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref">/내 컴퓨터/atc.ico</Property>
				<Property Name="Source[0].itemID" Type="Str">{A937904A-63CD-461C-A48F-DC8356CEAF05}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[1].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/subVI</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[1].type" Type="Str">Container</Property>
				<Property Name="Source[2].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[2].itemID" Type="Ref">/내 컴퓨터/setup complete.vi</Property>
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
				<Property Name="Source[2].properties[5].type" Type="Str">Show Abort button</Property>
				<Property Name="Source[2].properties[5].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[6].type" Type="Str">Show fp when called</Property>
				<Property Name="Source[2].properties[6].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[7].type" Type="Str">Window behavior</Property>
				<Property Name="Source[2].properties[7].value" Type="Str">Modal</Property>
				<Property Name="Source[2].properties[8].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[2].properties[8].value" Type="Bool">true</Property>
				<Property Name="Source[2].properties[9].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[2].properties[9].value" Type="Str">Centered</Property>
				<Property Name="Source[2].propertiesCount" Type="Int">13</Property>
				<Property Name="Source[2].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[2].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">3</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Bear Team</Property>
				<Property Name="TgtF_fileDescription" Type="Str">setup complete</Property>
				<Property Name="TgtF_internalName" Type="Str">setup complete</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">Dev lee sang woo</Property>
				<Property Name="TgtF_productName" Type="Str">setup complete</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{CB84E0CF-915D-47B4-B947-99988C063AEA}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">setup complete.exe</Property>
			</Item>
		</Item>
	</Item>
</Project>
