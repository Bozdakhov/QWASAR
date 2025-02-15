const List = props => {
    return (
      <div>
        <div className="coolHeader">{props.title}</div>
        <ul>
          {props.list.map(function(listItem) {
            return (<li className="coolListItem">
                {listItem}
            </li>);
          })}
        </ul>
      </div>
    )
}

export default List;