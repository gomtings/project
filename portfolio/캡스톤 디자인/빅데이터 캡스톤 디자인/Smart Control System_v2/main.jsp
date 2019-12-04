<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Smart Control</title>
<style type = "text/css">
/*body*/
body{
	background: #FFFFFF; //배경색
}

/*header*/
.header1{
	display: table; /*표시 형태*/
	height:100%; /* 너비 */
	width:100%; /* 높이 */
	background: #00FFFF; /* 배경색 */
	color: black; /* 글자색 */
	text-align: center; /* 글자의 수평 배치 */
	vertical-align: middle; /* 글자의 수직 배치 */
}

/*footer*/
.footer1{
	display: table; /* 표시 형태 */
	width: 100%; /* 너비 */
	height: 100%; /* 높이 */
	background: #00FFFF; /* 배경색 */
	color: black; /* 글자색 */
	text-align: center; /* 글자의 수평 배치 */
	vertical-align: middle; /* 글자의 수직 배치 */
}
</style>
</head>

<boby>
<section>
	<!--1. header-->
	<header class="header1">
		<h1></h1>
	</header>

	<!--2. main-->
	<section>
		<br>
		 <br>

		</br>
	</br>
</section>

<!-- 3. footer-->
<footer class = "footer1">
	<h3></h3>
</footer>

</section>
</body>
</html>

<script type="text/javascript"
	src="//dapi.kakao.com/v2/maps/sdk.js?appkey=b6691f8ad1899d6bf89ac976ffcaacc6"></script>
<!-- 그래프 API -->
<script src="https://code.highcharts.com/highcharts.js"></script>
<script src="https://code.highcharts.com/modules/exporting.js"></script>
<script src="https://code.highcharts.com/modules/export-data.js"></script>

<!-- 지도 API -->
<script src="/own.min.js"></script>
<link rel="stylesheet" type="text/css" href="<%=request.getContextPath()%>/css/Resource/css/reset.css">
<link rel="stylesheet" type="text/css" href="<%=request.getContextPath()%>/css/Resource/css/common.css">
<link rel="stylesheet" type="text/css" href="<%=request.getContextPath()%>/css/Resource/css/main.css">
<!-- 부트스트랩 CSS -->
<link href="<%=request.getContextPath()%>/css/Resource/vendor/bootstrap/css/bootstrap.min.css"
	rel="stylesheet">
<link href="<%=request.getContextPath()%>/css/Resource/css/small-business.css" rel="stylesheet">
</head>

<body>

	<!-- 메뉴 -->
	<nav class="navbar navbar-expand-lg navbar-dark bg-dark fixed-top">
	<div class="container">
		<a class="navbar-brand" href="#">Smart Control</a>
		<button class="navbar-toggler" type="button" data-toggle="collapse"
			data-target="#navbarResponsive" aria-controls="navbarResponsive"
			aria-expanded="false" aria-label="Toggle navigation">
			<span class="navbar-toggler-icon"></span>
		</button>
		<div class="collapse navbar-collapse" id="navbarResponsive">
			<ul class="navbar-nav ml-auto">
				<li class="nav-item active"><a class="nav-link" href="#">Home
						<span class="sr-only">(current)</span>
				</a></li>
			</ul>
		</div>
	</div>
	</nav>

	<!-- Page Content -->
	<div class="container">

		<!-- 공통 -->
		<div class="row my-4">
			<div class="col-lg-8">

				<div id="map" style="width: 100%; height: 400px;"></div>

				<script>
					var mapContainer = document.getElementById('map'), // 지도를 표시할 div
					mapOption = {
						center : new daum.maps.LatLng(33.450701, 126.570667), // 지도의 중심좌표
						level : 3
					// 지도의 확대 레벨
					};

					var map = new daum.maps.Map(mapContainer, mapOption); // 지도를 생성합니다

					// 마커를 표시할 위치와 내용을 가지고 있는 객체 배열입니다
					var positions = [ {
						content : '<div>카카오</div>',
						latlng : new daum.maps.LatLng(33.450705, 126.570677)
					}, {
						content : '<div>생태연못</div>',
						latlng : new daum.maps.LatLng(33.450936, 126.569477)
					}, {
						content : '<div>텃밭</div>',
						latlng : new daum.maps.LatLng(33.450879, 126.569940)
					}, {
						content : '<div>근린공원</div>',
						latlng : new daum.maps.LatLng(33.451393, 126.570738)
					} ];

					for (var i = 0; i < positions.length; i++) {
						// 마커를 생성합니다
						var marker = new daum.maps.Marker({
							map : map, // 마커를 표시할 지도
							position : positions[i].latlng
						// 마커의 위치
						});

						// 마커에 표시할 인포윈도우를 생성합니다
						var infowindow = new daum.maps.InfoWindow({
							content : positions[i].content
						// 인포윈도우에 표시할 내용
						});

						// 마커에 mouseover 이벤트와 mouseout 이벤트를 등록합니다
						// 이벤트 리스너로는 클로저를 만들어 등록합니다
						// for문에서 클로저를 만들어 주지 않으면 마지막 마커에만 이벤트가 등록됩니다
						daum.maps.event.addListener(marker, 'mouseover',
								makeOverListener(map, marker, infowindow));
						daum.maps.event.addListener(marker, 'mouseout',
								makeOutListener(infowindow));
					}

					// 인포윈도우를 표시하는 클로저를 만드는 함수입니다
					function makeOverListener(map, marker, infowindow) {
						return function() {
							infowindow.open(map, marker);
						};
					}

					// 인포윈도우를 닫는 클로저를 만드는 함수입니다
					function makeOutListener(infowindow) {
						return function() {
							infowindow.close();
						};
					}
				</script>

			</div>


			<!-- 오염물질 상세정보 -->
			<div class="col-lg-4">

				<!-- 오염물질 상세정보 타이틀 -->
				<!-- 				<div id="right_towns_map" class="towns">
					<div class="intro_cont" style="height: 97px;">
						<p id="S_TIME" class="time" style="font-size: 10px;">2018년 11월
							09일 14시</p>
						<h4 style="font-size: 11px; top: 10px; padding: 0px 0px;">
							미세먼지(PM<sub>10</sub>)
						</h4>
						<p id="S_I10007_24AVG_VALUE_1" style="font-size: 20px;"
							class="f3 g2">
							44 <span class="blk">㎍/㎥</span>
						</p>
						<p id="S_VALUE_10007_1" class="f4"
							style="font-size: 13px; font-weight: bold; color: #000000">
							(24시간 :22<span style="font-size: 11px; font-weight: normal;">㎍/㎥</span>)
						</p>
						<p class="icon">
							<img id="S_SIMBOL" style="height: 61px;"
								src="/images/main/intro_cont_icon02.png" alt="심볼등급(1~4 or 7)">
						</p>
						<p id="S_I10007_GRADE_1" class="f5 g2"></p>
					</div>
				</div> -->
				<table class="table_05">
					<colgroup>
						<col style="width: 80px;">
						<col style="width: 40px;">
						<col>
					</colgroup>
					<thead>
						<tr>
							<th scope="col">항목</th>
							<th scope="col">범례</th>
							<th scope="col">측정값</th>
						</tr>
					</thead>
					<tbody>

						<tr>
							<td rowspan="2">미세먼지PM<sub>2.5</sub></td>
							<td rowspan="2">보통</td>
							<td><strong id="S_VALUE_10008"> 6 </strong>㎍/㎥(1H)</td>
						</tr>
						<tr>
							<td><strong id="S_I10008_24AVG_VALUE"> 8 </strong>㎍/㎥(24H)</td>
						</tr>
						<tr>
							<td>이산화탄소</td>
							<td>좋음</td>
							<td><strong id="S_VALUE_10003">0.044</strong> ppm(1H)</td>
						</tr>
						<tr>
							<td>이산화질소</td>
							<td rowspan="2">좋음</td>
							<td><strong id="S_VALUE_10006">0.015</strong> ppm(1H)</td>
						</tr>

					</tbody>
				</table>
			</div>
			<!-- /.col-md-4 -->
		</div>
		<!-- /.row -->

		<!-- 버튼 이벤트 -->
		<div>
			<input type="button" value="일간"> <input type="button"
				value="월간"> <input type="button" value="연간">
			<!-- 			<div class="card-body">
				<p class="text-white m-0">This call to action card is a great
					place to showcase some important information or display a clever
					tagline!</p>
			</div> -->
		</div>

		<!-- Content Row -->
		<div class="row">
			<div id="container"
				style="min-width: 1140px; height: 400px; margin: 0 auto"></div>
			<div class="card h-100">
				<div class="card-body">
					<p class="card-text">
						<script>
							Highcharts.chart('container', {
								chart : {
									type : 'line'
								},
								title : {
									text : 'Monthly Average Temperature'
								},
								xAxis : {
									categories : [ 'Jan', 'Feb', 'Mar', 'Apr',
											'May', 'Jun', 'Jul', 'Aug', 'Sep',
											'Oct', 'Nov', 'Dec' ]
								},
								yAxis : {
									title : {
										text : 'Temperature (°C)'
									}
								},
								plotOptions : {
									line : {
										dataLabels : {
											enabled : true
										},
										enableMouseTracking : false
									}
								},
								series : [
										{
											name : 'Tokyo',
											data : [ 7.0, 6.9, 9.5, 14.5, 18.4,
													21.5, 25.2, 26.5, 23.3,
													18.3, 13.9, 9.6 ]
										},
										{
											name : 'London',
											data : [ 3.9, 4.2, 5.7, 8.5, 11.9,
													15.2, 17.0, 16.6, 14.2,
													10.3, 6.6, 4.8 ]
										} ]
							});
						</script>

					</p>
				</div>

			</div>
			<!-- 	<div class="col-md-4 mb-4">
				<div class="card h-100">
					<div class="card-body">
						<h2 class="card-title">Card One</h2>
						<p class="card-text">Lorem ipsum dolor sit amet, consectetur
							adipisicing elit. Rem magni quas ex numquam, maxime minus quam
							molestias corporis quod, ea minima accusamus.</p>
					</div>
					<div class="card-footer">
						<a href="#" class="btn btn-primary">More Info</a>
					</div>
				</div>
			</div>
			/.col-md-4
			<div class="col-md-4 mb-4">
				<div class="card h-100">
					<div class="card-body">
						<h2 class="card-title">Card Two</h2>
						<p class="card-text">Lorem ipsum dolor sit amet, consectetur
							adipisicing elit. Quod tenetur ex natus at dolorem enim! Nesciunt
							pariatur voluptatem sunt quam eaque, vel, non in id dolore
							voluptates quos eligendi labore.</p>
					</div>
					<div class="card-footer">
						<a href="#" class="btn btn-primary">More Info</a>
					</div>
				</div>
			</div>
			/.col-md-4
			<div class="col-md-4 mb-4">
				<div class="card h-100">
					<div class="card-body">
						<h2 class="card-title">Card Three</h2>
						<p class="card-text">Lorem ipsum dolor sit amet, consectetur
							adipisicing elit. Rem magni quas ex numquam, maxime minus quam
							molestias corporis quod, ea minima accusamus.</p>
					</div>
					<div class="card-footer">
						<a href="#" class="btn btn-primary">More Info</a>
					</div>
				</div>
			</div> -->
			<!-- /.col-md-4 -->

		</div>
		<!-- /.row -->

	</div>
	<!-- /.container -->

	<!-- Footer -->
	<footer class="py-5 bg-dark">
	<div class="container">
		<p class="m-0 text-center text-white">Copyright &copy; Your
			Website 2017</p>
	</div>
	<!-- /.container --> </footer>

	<!-- Bootstrap core JavaScript -->
	<script src="<%=request.getContextPath()%>/css/Resource/vendor/jquery/jquery.min.js"></script>
	<script src="<%=request.getContextPath()%>/css/Resource/vendor/bootstrap/js/bootstrap.bundle.min.js"></script>

</body>

</html>
