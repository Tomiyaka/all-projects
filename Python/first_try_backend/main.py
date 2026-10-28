from fastapi import FastAPI, Response, Path
from fastapi.responses import HTMLResponse, PlainTextResponse, FileResponse
from pydantic import BaseModel
import mimetypes

app = FastAPI()

@app.get("/")
def read_root():
    return FileResponse("index.html", 
                    filename="mainpage.html", 
                    media_type="application/octet-stream")

@app.get("/users/{name}")
def users(name:str  = Path(min_length=3, max_length=20)):
    return {"name": name}

@app.get("/file", response_class = FileResponse)
def root_html():
    return "index.html"

@app.get("/text", response_class = PlainTextResponse)
def root_text():
    return "Hello METANIT.COM"
 
@app.get("/html", response_class = HTMLResponse)
def root_html():
    return "<h2>Hello METANIT.COM</h2>"
