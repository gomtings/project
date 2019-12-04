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
			<Item Name="ip address.vi" Type="VI" URL="../../기말과제/subVI/ip address.vi"/>
			<Item Name="날자의 참거짓 판별(SubVI).vi" Type="VI" URL="../../기말과제/subVI/날자의 참거짓 판별(SubVI).vi"/>
			<Item Name="시간 저장(SubVI).vi" Type="VI" URL="../../기말과제/subVI/시간 저장(SubVI).vi"/>
			<Item Name="저장된시간을 숫자로(SubVI).vi" Type="VI" URL="../../기말과제/subVI/저장된시간을 숫자로(SubVI).vi"/>
			<Item Name="현재날자(SubVI).vi" Type="VI" URL="../../기말과제/subVI/현재날자(SubVI).vi"/>
			<Item Name="현재시간(SubVI).vi" Type="VI" URL="../../기말과제/subVI/현재시간(SubVI).vi"/>
		</Item>
		<Item Name="clidev.rtf" Type="Document" URL="../../../clidev.rtf"/>
		<Item Name="dev.rtf" Type="Document" URL="../../../dev.rtf"/>
		<Item Name="explanation.rtf" Type="Document" URL="../../../explanation.rtf"/>
		<Item Name="gugudan Client.vi" Type="VI" URL="../../기말과제/gugudan Client.vi"/>
		<Item Name="gugudan Clinet.bmp" Type="Document" URL="../gugudan Clinet.bmp"/>
		<Item Name="gugudan Clinet.ico" Type="Document" URL="../gugudan Clinet.ico"/>
		<Item Name="gugudan server.bmp" Type="Document" URL="../gugudan server.bmp"/>
		<Item Name="gugudan server.ico" Type="Document" URL="../gugudan server.ico"/>
		<Item Name="gugudan server.vi" Type="VI" URL="../../기말과제/gugudan server.vi"/>
		<Item Name="serdev.rtf" Type="Document" URL="../../../serdev.rtf"/>
		<Item Name="의존성" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
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
				<Item Name="Internecine Avoider.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/tcp.llb/Internecine Avoider.vi"/>
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
				<Item Name="TCP Listen Internal List.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/tcp.llb/TCP Listen Internal List.vi"/>
				<Item Name="TCP Listen List Operations.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/tcp.llb/TCP Listen List Operations.ctl"/>
				<Item Name="TCP Listen.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/tcp.llb/TCP Listen.vi"/>
				<Item Name="Three Button Dialog CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog CORE.vi"/>
				<Item Name="Three Button Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog.vi"/>
				<Item Name="Trim Whitespace.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Trim Whitespace.vi"/>
				<Item Name="whitespace.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/whitespace.ctl"/>
			</Item>
		</Item>
		<Item Name="빌드 스펙" Type="Build">
			<Item Name="gugudan Cli" Type="Installer">
				<Property Name="Destination[0].name" Type="Str">gugudan</Property>
				<Property Name="Destination[0].parent" Type="Str">{3912416A-D2E5-411B-AFEE-B63654D690C0}</Property>
				<Property Name="Destination[0].tag" Type="Str">{520788A1-5BCD-4E1A-A0CF-EB72EF6EF6F3}</Property>
				<Property Name="Destination[0].type" Type="Str">userFolder</Property>
				<Property Name="DestinationCount" Type="Int">1</Property>
				<Property Name="INST_autoIncrement" Type="Bool">true</Property>
				<Property Name="INST_buildLocation" Type="Path">../gugudan/gugudan Clinet setup</Property>
				<Property Name="INST_buildLocation.type" Type="Str">relativeToCommon</Property>
				<Property Name="INST_buildSpecName" Type="Str">gugudan Cli</Property>
				<Property Name="INST_defaultDir" Type="Str">{520788A1-5BCD-4E1A-A0CF-EB72EF6EF6F3}</Property>
				<Property Name="INST_language" Type="Int">18</Property>
				<Property Name="INST_productName" Type="Str">gugudan Client</Property>
				<Property Name="INST_productVersion" Type="Str">1.0.3</Property>
				<Property Name="InstSpecBitness" Type="Str">32-bit</Property>
				<Property Name="InstSpecVersion" Type="Str">14008036</Property>
				<Property Name="MSI_arpCompany" Type="Str">Polor Bear gugudan </Property>
				<Property Name="MSI_arpContact" Type="Str">tkddn4508@naver.com</Property>
				<Property Name="MSI_arpPhone" Type="Str">tkddn4508@naver.com</Property>
				<Property Name="MSI_arpURL" Type="Str">tkddn4508@naver.com</Property>
				<Property Name="MSI_bannerImageID" Type="Ref">/내 컴퓨터/gugudan Clinet.bmp</Property>
				<Property Name="MSI_distID" Type="Str">{169D8FC8-BC87-4207-9E9A-10D275FFF0DE}</Property>
				<Property Name="MSI_licenseID" Type="Ref">/내 컴퓨터/clidev.rtf</Property>
				<Property Name="MSI_osCheck" Type="Int">4</Property>
				<Property Name="MSI_upgradeCode" Type="Str">{40FD8595-2959-4253-AAEF-87CA17FC3D38}</Property>
				<Property Name="MSI_welcomeImageID" Type="Ref">/내 컴퓨터/gugudan Clinet.bmp</Property>
				<Property Name="MSI_windowMessage" Type="Str">gugudan Client 를 사용해주셔 감사합니다.

dev by lee sang woo </Property>
				<Property Name="MSI_windowTitle" Type="Str">gugudan Client</Property>
				<Property Name="RegDest[0].dirName" Type="Str">Software</Property>
				<Property Name="RegDest[0].dirTag" Type="Str">{DDFAFC8B-E728-4AC8-96DE-B920EBB97A86}</Property>
				<Property Name="RegDest[0].parentTag" Type="Str">2</Property>
				<Property Name="RegDestCount" Type="Int">1</Property>
				<Property Name="Source[0].dest" Type="Str">{520788A1-5BCD-4E1A-A0CF-EB72EF6EF6F3}</Property>
				<Property Name="Source[0].File[0].attributes" Type="Int">519</Property>
				<Property Name="Source[0].File[0].dest" Type="Str">{520788A1-5BCD-4E1A-A0CF-EB72EF6EF6F3}</Property>
				<Property Name="Source[0].File[0].name" Type="Str">gugudan Clinet.exe</Property>
				<Property Name="Source[0].File[0].Shortcut[0].destIndex" Type="Int">0</Property>
				<Property Name="Source[0].File[0].Shortcut[0].name" Type="Str">gugudan Clinet</Property>
				<Property Name="Source[0].File[0].Shortcut[0].subDir" Type="Str"></Property>
				<Property Name="Source[0].File[0].Shortcut[1].destIndex" Type="Int">1</Property>
				<Property Name="Source[0].File[0].Shortcut[1].name" Type="Str">gugudan Clinet</Property>
				<Property Name="Source[0].File[0].Shortcut[1].subDir" Type="Str"></Property>
				<Property Name="Source[0].File[0].Shortcut[2].destIndex" Type="Int">3</Property>
				<Property Name="Source[0].File[0].Shortcut[2].name" Type="Str">gugudan Clinet</Property>
				<Property Name="Source[0].File[0].Shortcut[2].subDir" Type="Str"></Property>
				<Property Name="Source[0].File[0].Shortcut[3].destIndex" Type="Int">2</Property>
				<Property Name="Source[0].File[0].Shortcut[3].name" Type="Str">gugudan_Clinet</Property>
				<Property Name="Source[0].File[0].Shortcut[3].subDir" Type="Str"></Property>
				<Property Name="Source[0].File[0].ShortcutCount" Type="Int">4</Property>
				<Property Name="Source[0].File[0].tag" Type="Str">{EC164C86-4E08-4980-A86F-B9CDBA2272E7}</Property>
				<Property Name="Source[0].File[1].attributes" Type="Int">519</Property>
				<Property Name="Source[0].File[1].dest" Type="Str">{520788A1-5BCD-4E1A-A0CF-EB72EF6EF6F3}</Property>
				<Property Name="Source[0].File[1].name" Type="Str">gugudan Clinet.aliases</Property>
				<Property Name="Source[0].File[1].tag" Type="Str">{55273EB5-4D29-4ABC-881C-3E825C29DA6F}</Property>
				<Property Name="Source[0].File[2].attributes" Type="Int">519</Property>
				<Property Name="Source[0].File[2].dest" Type="Str">{520788A1-5BCD-4E1A-A0CF-EB72EF6EF6F3}</Property>
				<Property Name="Source[0].File[2].name" Type="Str">gugudan Clinet.ini</Property>
				<Property Name="Source[0].File[2].tag" Type="Str">{8C772F88-CC3A-459C-B1D2-A138229CD524}</Property>
				<Property Name="Source[0].FileCount" Type="Int">3</Property>
				<Property Name="Source[0].name" Type="Str">gugudan Clinet</Property>
				<Property Name="Source[0].tag" Type="Ref">/내 컴퓨터/빌드 스펙/gugudan Clinet</Property>
				<Property Name="Source[0].type" Type="Str">EXE</Property>
				<Property Name="SourceCount" Type="Int">1</Property>
			</Item>
			<Item Name="gugudan Clinet" Type="EXE">
				<Property Name="App_copyErrors" Type="Bool">true</Property>
				<Property Name="App_INI_aliasGUID" Type="Str">{55273EB5-4D29-4ABC-881C-3E825C29DA6F}</Property>
				<Property Name="App_INI_GUID" Type="Str">{8C772F88-CC3A-459C-B1D2-A138229CD524}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{019EBAD4-D0F5-4532-9D97-636017EF3440}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">gugudan Clinet</Property>
				<Property Name="Bld_buildSpecName" Type="Str">gugudan Clinet</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_excludeLibraryItems" Type="Bool">true</Property>
				<Property Name="Bld_excludePolymorphicVIs" Type="Bool">true</Property>
				<Property Name="Bld_localDestDir" Type="Path">../gugudan Clinet</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_modifyLibraryFile" Type="Bool">true</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{283478B2-856E-4482-8633-405BAE9F3ECE}</Property>
				<Property Name="Bld_version.build" Type="Int">1</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">gugudan Clinet.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../gugudan Clinet/gugudan Clinet.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">relativeToProject</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">../gugudan Clinet/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">relativeToProject</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref">/내 컴퓨터/gugudan Clinet.ico</Property>
				<Property Name="Source[0].itemID" Type="Str">{91AAB609-32DE-45D9-922F-3E278C307067}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/gugudan Client.vi</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="Source[2].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[2].Container.applyProperties" Type="Bool">true</Property>
				<Property Name="Source[2].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[2].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[2].itemID" Type="Ref">/내 컴퓨터/subVI</Property>
				<Property Name="Source[2].properties[0].type" Type="Str">Window has title bar</Property>
				<Property Name="Source[2].properties[0].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[1].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[2].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[10].type" Type="Str">Run when opened</Property>
				<Property Name="Source[2].properties[10].value" Type="Bool">true</Property>
				<Property Name="Source[2].properties[11].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[2].properties[11].value" Type="Bool">false</Property>
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
				<Property Name="Source[2].properties[7].value" Type="Str">Default</Property>
				<Property Name="Source[2].properties[8].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[2].properties[8].value" Type="Bool">true</Property>
				<Property Name="Source[2].properties[9].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[2].properties[9].value" Type="Str">Unchanged</Property>
				<Property Name="Source[2].propertiesCount" Type="Int">12</Property>
				<Property Name="Source[2].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[2].type" Type="Str">Container</Property>
				<Property Name="Source[3].itemID" Type="Ref">/내 컴퓨터/gugudan server.vi</Property>
				<Property Name="Source[3].properties[0].type" Type="Str">Window has title bar</Property>
				<Property Name="Source[3].properties[0].value" Type="Bool">false</Property>
				<Property Name="Source[3].properties[1].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[3].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[3].properties[10].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[3].properties[10].value" Type="Bool">false</Property>
				<Property Name="Source[3].properties[2].type" Type="Str">Show vertical scroll bar</Property>
				<Property Name="Source[3].properties[2].value" Type="Bool">false</Property>
				<Property Name="Source[3].properties[3].type" Type="Str">Show horizontal scroll bar</Property>
				<Property Name="Source[3].properties[3].value" Type="Bool">false</Property>
				<Property Name="Source[3].properties[4].type" Type="Str">Show toolbar</Property>
				<Property Name="Source[3].properties[4].value" Type="Bool">false</Property>
				<Property Name="Source[3].properties[5].type" Type="Str">Show Abort button</Property>
				<Property Name="Source[3].properties[5].value" Type="Bool">false</Property>
				<Property Name="Source[3].properties[6].type" Type="Str">Show fp when called</Property>
				<Property Name="Source[3].properties[6].value" Type="Bool">false</Property>
				<Property Name="Source[3].properties[7].type" Type="Str">Window behavior</Property>
				<Property Name="Source[3].properties[7].value" Type="Str">Modal</Property>
				<Property Name="Source[3].properties[8].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[3].properties[8].value" Type="Bool">true</Property>
				<Property Name="Source[3].properties[9].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[3].properties[9].value" Type="Str">Unchanged</Property>
				<Property Name="Source[3].propertiesCount" Type="Int">11</Property>
				<Property Name="Source[3].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">4</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Bear gugudan </Property>
				<Property Name="TgtF_fileDescription" Type="Str">gugudan Clinet</Property>
				<Property Name="TgtF_internalName" Type="Str">gugudan Clinet</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">dev by lee sang woo</Property>
				<Property Name="TgtF_productName" Type="Str">gugudan Clinet</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{EC164C86-4E08-4980-A86F-B9CDBA2272E7}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">gugudan Clinet.exe</Property>
			</Item>
			<Item Name="gugudan ser" Type="Installer">
				<Property Name="Destination[0].name" Type="Str">gugudan</Property>
				<Property Name="Destination[0].parent" Type="Str">{3912416A-D2E5-411B-AFEE-B63654D690C0}</Property>
				<Property Name="Destination[0].tag" Type="Str">{E7927FDB-1053-4754-B733-6C257D82990C}</Property>
				<Property Name="Destination[0].type" Type="Str">userFolder</Property>
				<Property Name="DestinationCount" Type="Int">1</Property>
				<Property Name="INST_autoIncrement" Type="Bool">true</Property>
				<Property Name="INST_buildLocation" Type="Path">../gugudan/gugudan server setup</Property>
				<Property Name="INST_buildLocation.type" Type="Str">relativeToCommon</Property>
				<Property Name="INST_buildSpecName" Type="Str">gugudan ser</Property>
				<Property Name="INST_defaultDir" Type="Str">{E7927FDB-1053-4754-B733-6C257D82990C}</Property>
				<Property Name="INST_language" Type="Int">18</Property>
				<Property Name="INST_productName" Type="Str">gugudan server</Property>
				<Property Name="INST_productVersion" Type="Str">1.0.4</Property>
				<Property Name="INST_readmeID" Type="Ref">/내 컴퓨터/explanation.rtf</Property>
				<Property Name="InstSpecBitness" Type="Str">32-bit</Property>
				<Property Name="InstSpecVersion" Type="Str">14008036</Property>
				<Property Name="MSI_arpCompany" Type="Str">Polor Bear gugudan </Property>
				<Property Name="MSI_arpContact" Type="Str">tkddn4508@naver.com</Property>
				<Property Name="MSI_arpPhone" Type="Str">tkddn4508@naver.com</Property>
				<Property Name="MSI_arpURL" Type="Str">tkddn4508@naver.com</Property>
				<Property Name="MSI_bannerImageID" Type="Ref">/내 컴퓨터/gugudan server.bmp</Property>
				<Property Name="MSI_distID" Type="Str">{F06E4A51-2142-4516-8CE9-32CFCCF0E810}</Property>
				<Property Name="MSI_licenseID" Type="Ref">/내 컴퓨터/serdev.rtf</Property>
				<Property Name="MSI_osCheck" Type="Int">4</Property>
				<Property Name="MSI_upgradeCode" Type="Str">{5AABEDB1-28FC-4B7E-8AAF-79349D9339EE}</Property>
				<Property Name="MSI_welcomeImageID" Type="Ref">/내 컴퓨터/gugudan server.bmp</Property>
				<Property Name="MSI_windowMessage" Type="Str">gugudan server  를 사용해 주셔 감사합니다. 

dev by lee sang woo </Property>
				<Property Name="MSI_windowTitle" Type="Str">gugudan server </Property>
				<Property Name="RegDest[0].dirName" Type="Str">Software</Property>
				<Property Name="RegDest[0].dirTag" Type="Str">{DDFAFC8B-E728-4AC8-96DE-B920EBB97A86}</Property>
				<Property Name="RegDest[0].parentTag" Type="Str">2</Property>
				<Property Name="RegDestCount" Type="Int">1</Property>
				<Property Name="Source[0].dest" Type="Str">{E7927FDB-1053-4754-B733-6C257D82990C}</Property>
				<Property Name="Source[0].File[0].attributes" Type="Int">517</Property>
				<Property Name="Source[0].File[0].dest" Type="Str">{E7927FDB-1053-4754-B733-6C257D82990C}</Property>
				<Property Name="Source[0].File[0].name" Type="Str">gugudan server.exe</Property>
				<Property Name="Source[0].File[0].Shortcut[0].destIndex" Type="Int">2</Property>
				<Property Name="Source[0].File[0].Shortcut[0].name" Type="Str">gugudan server</Property>
				<Property Name="Source[0].File[0].Shortcut[0].subDir" Type="Str"></Property>
				<Property Name="Source[0].File[0].Shortcut[1].destIndex" Type="Int">3</Property>
				<Property Name="Source[0].File[0].Shortcut[1].name" Type="Str">gugudan server</Property>
				<Property Name="Source[0].File[0].Shortcut[1].subDir" Type="Str"></Property>
				<Property Name="Source[0].File[0].Shortcut[2].destIndex" Type="Int">1</Property>
				<Property Name="Source[0].File[0].Shortcut[2].name" Type="Str">gugudan server</Property>
				<Property Name="Source[0].File[0].Shortcut[2].subDir" Type="Str"></Property>
				<Property Name="Source[0].File[0].Shortcut[3].destIndex" Type="Int">0</Property>
				<Property Name="Source[0].File[0].Shortcut[3].name" Type="Str">gugudan server</Property>
				<Property Name="Source[0].File[0].Shortcut[3].subDir" Type="Str"></Property>
				<Property Name="Source[0].File[0].ShortcutCount" Type="Int">4</Property>
				<Property Name="Source[0].File[0].tag" Type="Str">{8A36BEEE-CC83-427A-8640-060F126CFC84}</Property>
				<Property Name="Source[0].File[1].attributes" Type="Int">519</Property>
				<Property Name="Source[0].File[1].dest" Type="Str">{E7927FDB-1053-4754-B733-6C257D82990C}</Property>
				<Property Name="Source[0].File[1].name" Type="Str">gugudan server.aliases</Property>
				<Property Name="Source[0].File[1].tag" Type="Str">{B58F0F60-512F-4748-B7DA-299F1CEBBCC2}</Property>
				<Property Name="Source[0].File[2].attributes" Type="Int">519</Property>
				<Property Name="Source[0].File[2].dest" Type="Str">{E7927FDB-1053-4754-B733-6C257D82990C}</Property>
				<Property Name="Source[0].File[2].name" Type="Str">gugudan server.ini</Property>
				<Property Name="Source[0].File[2].tag" Type="Str">{15E6A702-79AC-43D8-A6BF-592C6917B73F}</Property>
				<Property Name="Source[0].FileCount" Type="Int">3</Property>
				<Property Name="Source[0].name" Type="Str">gugudan server</Property>
				<Property Name="Source[0].tag" Type="Ref">/내 컴퓨터/빌드 스펙/gugudan server</Property>
				<Property Name="Source[0].type" Type="Str">EXE</Property>
				<Property Name="SourceCount" Type="Int">1</Property>
			</Item>
			<Item Name="gugudan server" Type="EXE">
				<Property Name="App_copyErrors" Type="Bool">true</Property>
				<Property Name="App_INI_aliasGUID" Type="Str">{B58F0F60-512F-4748-B7DA-299F1CEBBCC2}</Property>
				<Property Name="App_INI_GUID" Type="Str">{15E6A702-79AC-43D8-A6BF-592C6917B73F}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{709B4DF0-5BDF-4084-AB04-2834AC46C19E}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">gugudan server </Property>
				<Property Name="Bld_buildSpecName" Type="Str">gugudan server</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_excludeLibraryItems" Type="Bool">true</Property>
				<Property Name="Bld_excludePolymorphicVIs" Type="Bool">true</Property>
				<Property Name="Bld_localDestDir" Type="Path">../gugudan server</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_modifyLibraryFile" Type="Bool">true</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{799207E7-40B3-482B-8045-58A03598CEB9}</Property>
				<Property Name="Bld_version.build" Type="Int">4</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Bld_version.patch" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">gugudan server.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../gugudan server/gugudan server.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">relativeToProject</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">../gugudan server/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">relativeToProject</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref">/내 컴퓨터/gugudan server.ico</Property>
				<Property Name="Source[0].itemID" Type="Str">{91AAB609-32DE-45D9-922F-3E278C307067}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].Container.applyDestination" Type="Bool">true</Property>
				<Property Name="Source[1].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[1].Container.applyPassword" Type="Bool">true</Property>
				<Property Name="Source[1].Container.applyProperties" Type="Bool">true</Property>
				<Property Name="Source[1].Container.applySaveSettings" Type="Bool">true</Property>
				<Property Name="Source[1].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/subVI</Property>
				<Property Name="Source[1].properties[0].type" Type="Str">Window has title bar</Property>
				<Property Name="Source[1].properties[0].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[1].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[1].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[1].properties[10].type" Type="Str">Run when opened</Property>
				<Property Name="Source[1].properties[10].value" Type="Bool">true</Property>
				<Property Name="Source[1].properties[11].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[1].properties[11].value" Type="Bool">false</Property>
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
				<Property Name="Source[1].properties[9].value" Type="Str">Unchanged</Property>
				<Property Name="Source[1].propertiesCount" Type="Int">12</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[1].type" Type="Str">Container</Property>
				<Property Name="Source[2].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[2].itemID" Type="Ref">/내 컴퓨터/gugudan server.vi</Property>
				<Property Name="Source[2].properties[0].type" Type="Str">Window has title bar</Property>
				<Property Name="Source[2].properties[0].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[1].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[2].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[2].properties[10].type" Type="Str">Allow debugging</Property>
				<Property Name="Source[2].properties[10].value" Type="Bool">false</Property>
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
				<Property Name="Source[2].properties[7].value" Type="Str">Default</Property>
				<Property Name="Source[2].properties[8].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[2].properties[8].value" Type="Bool">true</Property>
				<Property Name="Source[2].properties[9].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[2].properties[9].value" Type="Str">Unchanged</Property>
				<Property Name="Source[2].propertiesCount" Type="Int">11</Property>
				<Property Name="Source[2].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[2].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">3</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Bear gugudan</Property>
				<Property Name="TgtF_fileDescription" Type="Str">gugudan server</Property>
				<Property Name="TgtF_internalName" Type="Str">gugudan server</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">dev by lee sang woo</Property>
				<Property Name="TgtF_productName" Type="Str">gugudan server</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{8A36BEEE-CC83-427A-8640-060F126CFC84}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">gugudan server.exe</Property>
			</Item>
		</Item>
	</Item>
</Project>
