var quoteText = ["\"This is a hundred times better than Facebook !\"",
			       "\"Best site I have ever seen !\"",
				   "\"This is not the site I've been looking for...\"",
				   "\"Bloody hell !\""];
var quoteAuthor = ["- Mark Zuckerberg","- Bill Gates","- Obi-Wan Kenobi","- Ron Weasley"];
	
var counter = 0;
function quoteFunction(){
	if(counter==quoteAuthor.length)
		counter = 0;
	document.getElementById("qText").innerHTML = quoteText[counter];
	document.getElementById("qAuthor").innerHTML = quoteAuthor[counter];
	counter++;
}

